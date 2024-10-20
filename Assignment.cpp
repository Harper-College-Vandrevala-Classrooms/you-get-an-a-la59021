#include "Assignment.hpp"
using namespace std;

Assignment::Assignment(string n, int m) {
    name = n;
    maxPoints = m;
}

int Assignment::get_max_points() {
    return maxPoints;
}

string Assignment::get_name() {
    return name;
}