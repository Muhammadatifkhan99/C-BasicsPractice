#include<iostream>
using namespace std;

class Student {
	int rollNo;
	string name;
public:
	Student (int rn, string nm){
		rollNo = rn;
		name   = nm;
		}
	void show(){
		cout<<"rollNo. is "<<rollNo<<endl;
		cout<<"name is "<<name<<endl;
	}
};


int main(){
	Student astd(19 , "Atif");
	astd.show();
}
