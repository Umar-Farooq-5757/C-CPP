#include <iostream>
using namespace std;

class Student{
	public:
	string name;
	int roll_no;
	
	// non-parameterized constructor function
	Student(){
		name = "Umar Farooq";
	}
	// parameterized constructor function
	Student(string n, int r){
		name = n;
		roll_no = r;
	}
	
	void changeRollNo(int newRollNo){
		roll_no = newRollNo;
	}
};

int main(){
	Student s1("Muhammad Rumman",24608);
	
	cout<<s1.name<<endl;
	cout<<s1.roll_no;
	return 0;
}
