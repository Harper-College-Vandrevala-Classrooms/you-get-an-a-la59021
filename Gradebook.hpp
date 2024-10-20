#include "Student.hpp"
#include "Assignment.hpp"
#include <vector>
#include <iostream>
using namespace std;

class Gradebook{
    private:
        string nameOfClass;
        vector<Student> students;
        vector<Assignment> assignments;
        int maxNumberOfPoints;

    public:
        Gradebook(string cName);
        void add_student(string name, string id);
        void add_assignment(string noa, int tpp);
        void enter_grade(string studentFullName, string assignmentName, double points);
        void report();
};