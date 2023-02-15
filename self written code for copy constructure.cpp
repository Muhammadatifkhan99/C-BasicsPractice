#include<iostream>
using namespace std;

class Student{
public:
	int rollno;
	string name;
	Student (){
		rollno = 0;
		name = "";
	}
	Student (int rn , string nm){
		rollno = rn ;
		name = nm;
	}
	void showrollno (){
		cout<<"My rollno. "<<rollno<<endl;
	}
	Student (const Student & obj){
		rollno = obj.rollno;
		name  = obj.name;
		cout<<"Copy Constructur"<<endl;
	}
};
void Show (Student obj){
	cout<<"my rollno "<<obj.rollno<<endl;
	cout<<"my name "<<obj.name<<endl;
}

int main (){
	Student astd (10,"ali");
	Student bstd = astd;   //copy constructure is called automatically
	Show (astd);           //invoking copy constucture for astd object
	
	return 0;
	
}
