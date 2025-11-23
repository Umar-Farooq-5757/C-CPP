#include <iostream>
using namespace std;

class Student{
	public:
		string name;
		int* roll_no_ptr;
		
		Student(string name, int roll_no){
			this->name = name;
			roll_no_ptr = new int;
			*roll_no_ptr = roll_no;
		}
		
		Student(Student &obj){
			this->name = obj.name;
			roll_no_ptr = new int;
			*roll_no_ptr = *obj.roll_no_ptr;
		}
};

int main(){
	Student s1("Muhammad Rumman", 24606);
	Student s2(s1);
	cout<<*s1.roll_no_ptr<<endl;
	*(s2.roll_no_ptr) = 24607;
	cout<<*s1.roll_no_ptr;
	return 0;
}
