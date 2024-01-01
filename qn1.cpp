Problem Statement



Suresh is developing a simple student information system where users can input the name and roll number of a student, and the program will display the student's information. The program provided can be used to achieve this functionality.



Help him to write a program that takes user input for a name and a roll number and then displays the input in the following format: "<number>: <name>". The program should define a class called Input with two member variables: a string variable called "name" and an integer variable called "rollnum".



The program should prompt the user to enter values for the name and number, store the input in an object of the Input class, and then display the number followed by a colon and the name.



Note: This is a sample question asked in an Amcat interview.

Input format :
The first line of the input consists of a string, which represents the student's name.

The second line of the input consists of an integer, which represents the roll number.

Output format :
The output prints a student name and roll number based on the given format.



Refer to the sample output for formatting specifications.

Code constraints :
The student name should be a non-empty string.

The student roll number should be a non-negative integer.

Sample test cases :
Input 1 :
Jane
158
Output 1 :
158 : Jane
Input 2 :
Bob!!
8486
Output 2 :
8486 : Bob!!



Soln:-


#include<iostream>
#include<string>
using namespace std;
class Input{
    public:
    string name;
    int rollnum;
    
};
int main(){
    Input I1;
    cin>>I1.name;
    cin>>I1.rollnum;
    cout<<I1.rollnum<<" "<<":"<<" "<<I1.name;
    return 0;
}
