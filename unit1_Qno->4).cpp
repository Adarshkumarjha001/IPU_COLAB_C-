Problem Statement



Mithra is working on a hospital management system, and you need to implement a feature that allows doctors to input their information and generate a doctor passport. The doctor passport should include the doctor's name, address, and ward number.



Write a program that takes input from the user for a doctor's name, address, and ward number. Create a class called Doctor object with the provided information and assign it to a doctor Passport object. Finally, display the doctor's name, address, and ward number from the doctor passport object.



Note: This is a sample question asked in an Accenture interview.

Input format :
The first line of input consists of a string representing the name of a patient.

The second line of input consists of a string representing the address of a patient.

The third line of input consists of an integer representing the ward number.

Output format :
The output displays the patient's details.



Refer to the sample output for format specifications.

Sample test cases :
Input 1 :
Raju
Chennai
34
Output 1 :
Name: Raju
Address: Chennai
Ward Number: 34
Input 2 :
Manju
Coimbatore
37
Output 2 :
Name: Manju
Address: Coimbatore
Ward Number: 37
Whitelist
Set 1:
class Doctor



soln:-

#include<iostream>
#include<string>
using namespace std;
class Doctor{
    public:
    string name;
    string address;
    int ward;
    
};
int main(){
    Doctor d1;
    cin>>d1.name;
    cin>>d1.address;
    cin>>d1.ward;
    cout<<"Name: "<<d1.name<<endl;
    cout<<"Address: "<<d1.address<<endl;
    cout<<"Ward Number: "<<d1.ward;
    return 0;
    }
