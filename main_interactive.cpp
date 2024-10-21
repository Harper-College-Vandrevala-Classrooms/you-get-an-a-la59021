#include "Gradebook.hpp"
using namespace std;

int main() {
    string className;
    cout << "What is the name of the class";
    cin >> className;
    Gradebook gradebook(className);

    new_student:
        string studentName, studentFirstName, studentLastName, studentID;
        cout << endl << "What is the student's first name?  ";
        cin >> studentFirstName;
        cout << endl << "What is the student's last name?  ";
        cin >> studentLastName;
        cout << endl << "What is the student's ID?  ";
        cin >> studentID;
        studentName = studentFirstName + " " + studentLastName;
        gradebook.add_student(studentName, studentID);
    
    string reply;
    cout << "Would you like to add another student? (Y/N)  ";
    cin >> reply;
    if (reply == "Y" || reply == "y") {
        goto new_student;
    }

    new_assignment:
        string assignmentName;
        int assignmentPoints;
        cout << endl << "What is the name of the assignment?  ";
        cin >> assignmentName;
        cout << endl << "How many points is the assignment worth?  ";
        cin >> assignmentPoints;
        gradebook.add_assignment(assignmentName, assignmentPoints);
    
    string reply;
    cout << "Would you like to add another assignment? (Y/N)  ";
    cin >> reply;
    if (reply == "Y" || reply == "y") {
        goto new_assignment;
    }


    new_grade:
        string studentName, studentFirstName, studentLastName, assignmentName;
        double earnedPoints;
        cout << endl << "What is the student's first name?  ";
        cin >> studentFirstName;
        cout << endl << "What is the student's last name?  ";
        cin >> studentLastName;
        cout << endl << "What is the assignment's name?  ";
        cin >> assignmentName;
        cout << endl << "How many points did the student earn?  ";
        cin >> earnedPoints;
        studentName = studentFirstName + " " + studentLastName;
        gradebook.enter_grade(studentName, assignmentName, earnedPoints);
    
    string reply;
    cout << "Would you like to grade another student? (Y/N)  ";
    cin >> reply;
    if (reply == "Y" || reply == "y") {
        goto new_grade;
    }

    gradebook.report();

    return 0;
}