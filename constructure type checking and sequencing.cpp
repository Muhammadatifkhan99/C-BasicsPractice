

//constructures 3








#include<iostream>

using namespace std;

class Student{
	
int rollNo;

string name;

public:
    Student(){
        rollNo=0;
      	name = "";
    }
	Student(int ron){
		rollNo=ron;
      	name = "";
	}
	Student(string nm1, int rn){
      	rollNo=rn;
      	name = nm1;
	cout<<"second constructor"<<endl;
	}
	Student(int rn, string nm){
      	rollNo=rn;
      	name = nm;
    cout<<"third constructor"<<endl;  	
	}
void showRollno(){
	cout<<"My roll no="<<rollNo<<endl;
	cout<<"name="<< name<<endl;
}
};
int main(){
	Student astd(10,"ali"), bstd(12);
	astd.showRollno( );
	bstd.showRollno();
	return 0;
}
