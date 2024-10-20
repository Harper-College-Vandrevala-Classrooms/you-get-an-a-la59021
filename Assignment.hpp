#include <string>
using namespace std;

class Assignment {
    private:
       string name;
       int maxPoints;
    public:
        Assignment(string n, int m);
        int get_max_points();
        string get_name(); 
};