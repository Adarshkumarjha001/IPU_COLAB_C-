Problem Statement



Zara is developing a navigation system for a robot. The system uses directions to determine the robot's movement. So, implement a Navigator class that can receive direction input and provide corresponding navigation instructions.



In this scenario, the program allows you to input a direction using integer values representing the cardinal directions (North, East, West, and South). The code then utilizes the Navigator class to determine the corresponding navigation instruction based on the input direction.



Create an enum with all four directions: North, East, West, and South as the constants.



We will then use the switch case statements to switch between the direction elements and print the output based on the value of the variable for the enum directions.



Write a Program to print the direction.



Note: This is a sample question asked in a TCS interview.

Input format :
The input consists of an integer.

Output format :
The output prints whether the direction is North (or) South (or) East (or) West (or) Invalid Input.

Code constraints :
1 represents North.

2 represents East.

3 represents West.

4 represents South.

Sample test cases :
Input 1 :
1
Output 1 :
We are headed towards North.
Input 2 :
12
Output 2 :
Invalid Input
Whitelist
Set 1:
enum
class Navigator



soln:-


  #include<iostream>
using namespace std;
class Navigator{
    public:
    int num;
};

int main(){
    
    Navigator N1;
   
    enum{North,East,West,South};
    cin>>N1.num;
    switch(N1.num){
        case 1:{
           cout<<"We are headed towards North.";
           break;
        }
        case 2:{
            cout<<"We are headed towards East.";
            break;
        }
        case 3:{
            cout<<"We are headed towards West.";
            break;
        }
        case 4:{
            cout<<"We are headed towards South.";
            break;
        }
        default:{
            cout<<"Invalid Input";
            break;
        }
       
    }
    return 0;
}

