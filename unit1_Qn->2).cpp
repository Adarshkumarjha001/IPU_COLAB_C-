Problem Statement



Mythili was tasked with developing a program that collects information from users. The program should prompt the user to enter their employee ID (integer), salary (decimal), and department code (character). Once the user provides the required information, the program should display the entered values for verification using the 'cin' statement and display the output using the 'cout' statement.



Example

Input:

12

567.344

g



Output:

Integer: 12

Double: 567.344

Character: g



Explanation: The program gets the input from the user using 'cin' and displays the output using 'cout'.



Note: This is sample question asked in a Accenture interview.

Input format :
The first line of the input consists of an integer, which represents the employee ID.

The second line of the input consists of a double, which represents the salary.

The third line of the input consists of a character, which represents the department code.

Output format :
The output displays the input values of employee ID, salary, and department code.



Refer to the sample output for format specifications.

Sample test cases :
Input 1 :
12
567.344
g
Output 1 :
Employee ID: 12
Salary: 567.34
Department code: g
Input 2 :
23
2332.233
F
Output 2 :
Employee ID: 23
Salary: 2332.23
Department code: F

  soln:

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int employeeId;
    double salary;
    char department_code;
    cin>>employeeId>>salary>>department_code;
    cout<<"Employee ID: "<<employeeId<<endl;
    cout<<fixed<<setprecision(2)<<"Salary: "<<salary<<endl;
    cout<<"Department code: "<<department_code;
    return 0;
    
}
