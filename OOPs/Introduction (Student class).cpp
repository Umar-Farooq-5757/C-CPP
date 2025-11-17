#include <iostream>
using namespace std;

class Student{
	public:
	string name;
	int roll_no;
	
	void changeRollNo(int newRollNo){
		roll_no = newRollNo;
	}
};

int main(){
	Student s1;
	s1.name = "Umar Farooq";
	s1.roll_no = 24607;
	
	cout<<s1.name;
	return 0;
}
