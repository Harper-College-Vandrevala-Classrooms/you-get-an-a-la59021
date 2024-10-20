#include "Gradebook.hpp"
using namespace std;

Gradebook::Gradebook(string cName) {
    nameOfClass = cName;
}

void Gradebook::add_student(string name, string id) {
    students.push_back(Student(name, id));
}

void Gradebook::add_assignment(string noa, int tpp) {
    assignments.push_back(Assignment(noa, tpp));
    maxNumberOfPoints += tpp;
}

void Gradebook::enter_grade(string studentName, string assignmentName, double points) {
    int studentIndex, assignmentIndex;
    for (int x = 0; x < students.size(); x++) {
        string name = students[x].get_name();
        if (name == studentName) {
            studentIndex = x;
        }
    }
    for (int x = 0; x < assignments.size(); x++) {
        string name = assignments[x].get_name();
        if (name == assignmentName) {
            assignmentIndex = x;
        }
    }
    int max = assignments[assignmentIndex].get_max_points();
    students[studentIndex].add_grade(points / max);
}

void Gradebook::report() {
    cout << "student's last name, student's first name, student's ID";
    for (int x = 0; x < assignments.size(); x++) {
        cout << ", " + assignments[x].get_name();
    }
    cout << endl;
    for (int x = 0; x < students.size(); x++) {
        string name, firstName, lastName;
        name = students[x].get_name();
        bool check = false;
        for (int y = 0; y < name.length(); y++) {
            if (name[y] == ' ') {
                check = true;
            }
            if (check == false && name[y] != ' ') {
                firstName += name[y];
            }
            if (check == true && name[y] != ' ') {
                lastName += name[y];
            }
        }
        cout << lastName << ", " << firstName << ", " << students[x].get_ID();
        for (int z = 0; z < students[x].get_grades().size(); z++) {
            cout << ", " << to_string(students[x].get_grades()[z]);
        }
        cout << endl;
    }
}