# Schedule Organizer For Exams

[Presentation ](https://www.canva.com/design/DAGEAkslc2M/-xv8ZPI0yLjnGEujPnRYCg/view?utm_content=DAGEAkslc2M&utm_campaign=designshare&utm_medium=link&utm_source=editor)


## Purpose
The Schedule Organizer is a C++ program designed to help users manage their schedules effectively, particularly focusing on organizing exam dates and times. It offers functionalities for adding, updating, removing, and displaying exams, providing users with a streamlined approach to managing their academic commitments.

## Design Decisions
- **Modular Structure:** The codebase is organized into separate functions for each operation to enhance readability and maintainability.
- **Input Validation:** Input validation is implemented to ensure that users provide valid inputs, such as correct date and time formats, and that the entered subject is not empty.
- **User-Friendly Interface:** The program presents a simple menu-based interface for users to interact with, ensuring ease of use and navigation.

## Algorithms Used
No specific algorithms are used in this program. Operations are primarily performed using standard C++ functionalities and data structures.

## Data Structures Employed
The main data structure used in the program is the `std::map`, which stores exams mapped to their respective subjects. This allows for efficient storage and retrieval of exam information.

## Features
1. `addExam(map<string, string> &exams)`: Adds a new exam to the list of exams.
2. `updateExam(map<string, string> &exams)`: Updates an existing exam's date and time.
3. `removeExam(map<string, string> &exams)`: Removes an exam from the list of exams.
4. `displayExams(const map<string, string> &exams)`: Displays all exams along with their dates and times.

## HOW TO USE IT?

### Menu Options
- **Add Exam (1):** Allows the user to add a new exam by providing the subject, date, and time.
- **Update Exam (2):** Enables the user to update an existing exam's date and time by specifying the subject.
- **Remove Exam (3):** Allows the user to remove an exam from the list by specifying the subject.
- **Display All Exams (4):** Displays all exams along with their dates and times.
- **Exit (5):** Exits the program.


Screenshots:

![image](https://github.com/akylaijumana/Schedule-Organizer/assets/150505438/9e210305-e92c-4755-9864-a17fefaf836f)
![image](https://github.com/akylaijumana/Schedule-Organizer/assets/150505438/7051c0e1-77d4-4b33-9710-2a50d7ffb392)
![photo_2024-05-15_14-28-33](https://github.com/akylaijumana/Schedule-Organizer/assets/150505438/0bed16d5-dc6c-45df-b399-05ee6890baac)
### How to use it?

## adding exam :
```
Exam Organizer Menu:
1. Add Exam
2. Update Exam
3. Remove Exam
4. View All Exams
5. Exit
Enter your choice: 1
Enter subject: history
Enter date and time (DD/MM/YYYY HH:MM): 01/5/2024 12:00
```
## updating exam :
```
Exam Organizer Menu:
1. Add Exam
2. Update Exam
3. Remove Exam
4. View All Exams
5. Exit
Enter your choice: 2
Enter subject to update: history
Enter new date and time (DD/MM/YYYY HH:MM): 14/5/2024 13:30
Exam updated successfully!
```
## removing exam:
```
Exam Organizer Menu:
1. Add Exam
2. Update Exam
3. Remove Exam
4. View All Exams
5. Exit
Enter your choice: 3
Enter subject to remove: history
Exam removed successfully!

```
## displaying all exams :
 ```
Exam Organizer Menu:
1. Add Exam
2. Update Exam
3. Remove Exam
4. View All Exams
5. Exit
Enter your choice: 4
Subject         Exam Date and Time
---------------------------------------
history            14/5/2024 13:30
---------------------------------------
```


