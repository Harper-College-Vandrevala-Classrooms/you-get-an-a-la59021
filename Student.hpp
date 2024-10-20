#include <string>
#include <vector>
using namespace std;

class Student {
    private:
        string studentName, studentID;
        vector<double> grades;

    public:
        Student(string name, string id);
        string get_name();
        string get_ID();
        void add_grade(double grade);
        vector<double> get_grades();
};