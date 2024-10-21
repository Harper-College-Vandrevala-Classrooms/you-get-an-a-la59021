#include "Student.hpp"
using namespace std;

Student::Student(string name, string id) {
    studentName = name;
    studentID = id;
}

string Student::get_name() {
    return studentName;
}

string Student::get_ID() {
    return studentID;
}

void Student::add_ungraded() {
    grades.push_back(-1);
}

void Student::add_grade(double grade, int index) {
    grades[index] = grade * 100;
}

vector<double> Student::get_grades() {
    return grades;
}