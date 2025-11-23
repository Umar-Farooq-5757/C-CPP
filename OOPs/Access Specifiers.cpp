#include <iostream>
using namespace std;

class Student{
	private:int roll_no;
	public:
	string name;
	
	
	int getRollNo(){
		return roll_no;
	}
	void changeRollNo(int newRollNo){
		roll_no = newRollNo;
	}
};

int main(){
	Student s1;
	s1.changeRollNo(24609);
	cout<<s1.name<<endl;
	cout<<s1.getRollNo();
	return 0;
}
