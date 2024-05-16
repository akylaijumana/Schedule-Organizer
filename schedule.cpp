#include <bits/stdc++.h>
using namespace std;

// Function to add an exam
void addExam(map<string, string> &exams) {
    string subject, date, time;
    cout << "Enter subject: ";
    cin >> subject;
    cout << "Enter date and time (MM/DD/YYYY HH:MM): ";
    cin >> date >> time;
    exams[subject] = date + " " + time;
    cout << "Exam added successfully!" << endl;
}

// Function to update an exam
void updateExam(map<string, string> &exams) {
    string subject, date, time;
    cout << "Enter subject to update: ";
    cin >> subject;
    if (exams.find(subject) != exams.end()) {
        cout << "Enter new date and time (MM/DD/YYYY HH:MM): ";
        cin >> date >> time;
        exams[subject] = date + " " + time;
        cout << "Exam updated successfully!" << endl;
    } else {
        cout << "Exam not found!" << endl;
    }
}

// Function to remove an exam
void removeExam(map<string, string> &exams) {
    string subject;
    cout << "Enter subject to remove: ";
    cin >> subject;
    if (exams.find(subject) != exams.end()) {
        exams.erase(subject);
        cout << "Exam removed successfully!" << endl;
    } else {
        cout << "Exam not found!" << endl;
    }
}

// Function to display all exams
void viewExams(const map<string, string> &exams) {
    cout << "Subject\t\tExam Date and Time" << endl;
    cout << "---------------------------------------" << endl;
    for (const auto &exam : exams) {
        cout << exam.first << "\t\t" << exam.second << endl;
    }
    cout << "---------------------------------------" << endl;
}

int main() {
    map<string, string> exams;
    int choice;
    
    do {
        cout<<endl;
        cout << "Exam Organizer Menu:" << endl;
        cout << "1. Add Exam" << endl;
        cout << "2. Update Exam" << endl;
        cout << "3. Remove Exam" << endl;
        cout << "4. View All Exams" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        if (choice == 1) {
            addExam(exams);
        } else if (choice == 2) {
            updateExam(exams);
        } else if (choice == 3) {
            removeExam(exams);
        } else if (choice == 4) {
            viewExams(exams);
        } else if (choice == 5) {
            cout << "Exiting program..." << endl;
        } else {
            cout << "Invalid choice.." << endl;
        }
    } while (choice != 5);
    
    return 0;
}
