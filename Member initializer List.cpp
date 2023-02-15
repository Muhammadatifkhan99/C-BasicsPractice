#include<iostream>
using namespace std;

class Student{
	int rollNo;
	string name;
	float gpa;
	public:
		Student(int rn,string nm,float cgpa):rollNo(rn),name(nm),gpa(cgpa){
			
		}
	string get_name(){
		return name;
	}
		
	int get_rollNo(){
		return rollNo;
	}
	float get_gpa(){
		return gpa;
	}
	void show() const {
		cout<<get_rollNo()<<endl;
		cout<<get_name()<<endl;
		cout<<get_gpa()<<endl;
	}
	
};

int main(){
	const Student s1(10,"Khan",3.3);
	s1.show();
	
	return 0;
}
