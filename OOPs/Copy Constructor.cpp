#include <iostream>
using namespace std;

class Student{
	public:
		string name;
		int roll_no;
		
		Student(string name, int roll_no){
			this->name = name;
			this->roll_no = roll_no;
		}
		
		// copy constructor
		Student(Student &obj){
			this->name = obj.name;
			this->roll_no = obj.roll_no;
		}
};

int main(){
	Student s1("Muhammad Rumman", 24606);
	Student s2(s1); // custom copy constructor will be invoked here
	s2.name = "Umar Farooq";
	cout<<s2.name;
	
	return 0;
}
