#include<iostream>
using namespace std;
class Student{
public:
	int rollNo;
    string name;
    Student(){
        rollNo=0;
      	name = "";
    }
	Student(int rn, string nm){
      	rollNo=rn;
      	name = nm;
    }
	void showRollno(){
	cout<<"My roll no="<<rollNo<<endl;
	}	
	Student(const Student &obj){
		rollNo = obj.rollNo;
		name = obj.name;
		cout<<"copy constructor"<<endl;
	}
};
void show(Student obj){
	cout<<"My roll no="<<obj.rollNo<<endl;
	cout<<"name="<< obj.name<<endl;
	
}

int main(){
	Student astd(10,"ali");
	Student bstd = astd; // copy constructor is called automatically
	show(astd); // invoke copy constructor for astd object 
	return 0;
}
