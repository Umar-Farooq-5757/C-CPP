#include <iostream>
using namespace std;

class Student{
	public:
	string name;
	int roll_no;
	
	int getRollNo(){
		return roll_no;
	}
	void changeRollNo(int newRollNo){
		roll_no = newRollNo;
	}
	// parameterized constructor function
	Student(string name, int roll_no){
		this->name = name;
		this->roll_no = roll_no;
	}
};

int main(){
	Student s1("Umar Farooq", 24607);
	cout<<s1.name<<endl;
	cout<<s1.roll_no;
	return 0;
}
