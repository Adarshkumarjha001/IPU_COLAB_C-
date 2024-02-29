#include<iostream>
using namespace std;
class Animal{
	public:
	void eat(){
		cout<<"The animal is eating. "<<endl;
	}
	void walk(){
		
		cout<<"The animal is walking. "<<endl;
	}
};
class dog : public Animal{
	public:
	void bark(){
		cout<<"The dog is barking."<<endl;
	}
};
class babydog : public dog{
	public:
		void yorn(){
			cout<<"The babydog is yorning."<<endl;
		}
};
int main(){
	babydog d1;
	d1.eat();
	d1.bark();
	d1.walk();
	d1.yorn();
}
