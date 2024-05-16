#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>

using namespace std;

// Function prototypes
void saveToFile(const map<string, string> &exams, const string &filename);
void loadFromFile(map<string, string> &exams, const string &filename);

// Function to add an exam
void addExam(map<string, string> &exams, const string &filename) {
    string subject, date, time;
    cout << "Enter subject: ";
    cin >> subject;
    cout << "Enter date and time (DD/MM/YYYY HH:MM): ";
    cin >> date >> time;
    exams[subject] = date + " " + time;

    // Save exams to file
    saveToFile(exams, filename);

    cout << "Exam added successfully!" << endl;
}

// Function to update an exam
void updateExam(map<string, string> &exams, const string &filename) {
    string subject, date, time;
    cout << "Enter subject to update: ";
    cin >> subject;
    if (exams.find(subject) != exams.end()) {
        cout << "Enter new date and time (DD/MM/YYYY HH:MM): ";
        cin >> date >> time;
        exams[subject] = date + " " + time;
        cout << "Exam updated successfully!" << endl;

        // Save exams to file
        saveToFile(exams, filename);
    } else {
        cout << "Exam not found!" << endl;
    }
}

// Function to remove an exam
void removeExam(map<string, string> &exams, const string &filename) {
    string subject;
    cout << "Enter subject to remove: ";
    cin >> subject;
    if (exams.find(subject) != exams.end()) {
        exams.erase(subject);
        cout << "Exam removed successfully!" << endl;

        // Save exams to file
        saveToFile(exams, filename);
    } else {
        cout << "Exam not found!" << endl;
    }
}

// Function to view all exams
void viewExams(map<string, string> &exams, const string &filename) {
    if (exams.empty()) {
        cout << "No exams found!" << endl;
        return;
    }
    
    // Save exams to file before viewing
    saveToFile(exams, filename);

    cout << "Subject\t\tExam Date and Time" << endl;
    cout << "---------------------------------------" << endl;
    for (const auto &exam : exams) {
        cout << exam.first << "\t\t" << exam.second << endl;
    }
    cout << "---------------------------------------" << endl;
}

// Function to save exams to a file
void saveToFile(const map<string, string> &exams, const string &filename) {
    cout << "Saving exams to file: " << filename << endl; // Debugging output
    ofstream file(filename);
    if (file.is_open()) {
        for (const auto &exam : exams) {
            file << exam.first << "," << exam.second << endl;
        }
        file.close();
        cout << "Exams saved to file successfully!" << endl;
    } else {
        cout << "Unable to open file for saving." << endl;
    }
}

// Function to load exams from a file
void loadFromFile(map<string, string> &exams, const string &filename) {
    cout << "Loading exams from file: " << filename << endl; // Debugging output
    ifstream file(filename);
    if (file.is_open()) {
        exams.clear(); // Clear existing exams
        string line;
        while (getline(file, line)) {
            stringstream ss(line);
            string subject, datetime;
            getline(ss, subject, ',');
            getline(ss, datetime);
            exams[subject] = datetime;
        }
        file.close();
        cout << "Exams loaded from file successfully!" << endl;
    } else {
        cout << "Unable to open file for loading." << endl;
    }
}

int main() {
    map<string, string> exams;
    int choice;
    string filename = "exams.txt"; // Change filename as needed
    
    // Load exams from file at program start
    loadFromFile(exams, filename);
    
    do {
        cout<<endl;
        cout << "Exam Organizer Menu:" << endl;
        cout << "1. Add Exam" << endl;
        cout << "2. Update Exam" << endl;
        cout << "3. Remove Exam" << endl;
        cout << "4. View All Exams" << endl;
        cout << "5. Save Exams to File" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch(choice) {
            case 1:
                addExam(exams, filename);
                break;
            case 2:
                updateExam(exams ,filename);
                break;
            case 3:
                removeExam(exams ,filename);
                break;
            case 4:
                viewExams(exams, filename);
                break;
            case 5:
                saveToFile(exams, filename);
                break;
            case 6:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice.." << endl;
                break;
        }
    } while (choice != 6);
    
    return 0;
}
