Problem Statement



Ragu wants to create a program to store and display personal information about individuals. He decided to create a class called Person to represent a person's details with a name, age, and gender as their private attributes. Initialize and display the same using member functions. The name and gender should be displayed in uppercase letters.



Note: This is a sample question asked in an Infosys interview.

Input format :
The input consists of the name as a string, age as an integer, and gender as a string of a person in separate lines.

Output format :
The output displays the name, age, and gender of the person separated by spaces.

The name and gender should be printed in uppercase letters.

Sample test cases :
Input 1 :
bob
28
male
Output 1 :
BOB 28 MALE
Whitelist
Set 1:
class Person





soln:-
  #include<iostream>
using namespace std;
class Person{
    public:
    string name;
    int age;
    string gender;
};
string convert(string s)
{
    int n = s.length();
    for(int i = 0; i< n; i++)
    {
        s[i] = toupper(s[i]);
    }
    return s;
}
int main(){
    Person P1;
    cin>>P1.name;
    cin>>P1.age;
    cin>>P1.gender;
    cout<<convert(P1.name)<<" "<<P1.age<<" "<<convert(P1.gender);
    return 0;
}
