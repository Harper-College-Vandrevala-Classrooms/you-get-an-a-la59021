[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/j_K5Riis)
[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-2e0aaae1b6195c2367325f4f02e2d04e9abb55f0b24a779b69b11b9e10269abc.svg)](https://classroom.github.com/online_ide?assignment_repo_id=16566548&assignment_repo_type=AssignmentRepo)
# You Get an A! - C++ Template


A.J.'s You Get an A! Assignment
===============================

how to use
----------
First, please note that "main_test.cpp" and "main_interactive.cpp" are not intended to be compiled together each of them has a seperate main function. 

"main_test.cpp" is intended to just provide an example of how to use the code with the student's information being predetermined.

"main_interactive.cpp" is diffrent it prompts the user for the information. It is setup to print the information to the console.

There are 3 classes in this project but "Student" and "Assignment" are just used to store data so I will focus on explaining the "Gradebook" class.

The "Gradebook" class has 5 methods the first of which is the constructor. The constructor takes 1 parameter called "cName" which is the name of the class for the gradebook.

The second method is "add_student" which take 2 parameters called "name" and "id", both are strings. "name" represents the student's full name, formated as firstname lastname. "id" represents the student's id.

The third method is "add_assignment" which take 2 parameters called "noa" and "tpp". "noa" is a string that represents the name of the assignment, and "tpp" is and interger that represents the total possible points for the assignment.

the fourth method is "enter_grade" which takes 3 parameters called "studentFullName", "assignmentName", and "points". "studentFullName" is a string that represents the students full name formated as firstname lastname. "assignmentName" is a string that represents the name of the assignment to be graded. "points" is a double that represents a student's points for the assignment.

the fifth method is "report" which takes no parameters. "report" is used to print to the console the names, IDs, and grades of all students regestered in the gradebook.


how to compile and run
----------------------

To use the diffrent main files you need to change the "main.cpp" in the following commands to the name of the file you want to use.

After opening a console in the source folder compile your desired main file using:
```
g++ -Wall main.cpp Gradebook.cpp Assignment.cpp Student.cpp -o Gradebook.out
```

To run the program, while the console is still in the source folder use the command:
```
./Gradebook.out
```