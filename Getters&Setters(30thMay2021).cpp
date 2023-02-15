#include<iostream>
using namespace std;

class Student {
private:
	int age;
public:
	int displayage(){
		return age;
	}
	void setage(int a){
		age = a;
	}
};

int main (){
	Student s1;
	s1.setage(23);
	cout<<s1.displayage();
	return 0;
}
