#include <iostream>
using namespace std;

string testAndReturn(int x) {
    string reply = "";
    if (x % 3 == 0) {
        reply += "Fizz";
    }
    if (x % 5 == 0) {
        reply += "Buzz";
    }
    if (reply == "") {
        reply = x;
    }
    return reply;
}

int main() {
    for (int i = 0; i < 10; i++){
        testAndReturn(i);
    }    
    return 0;    
}