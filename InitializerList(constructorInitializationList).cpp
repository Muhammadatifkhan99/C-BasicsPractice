//#include<iostream>
//using namespace std;
//
//class Student{
//	int x;
//	int y;
//	int z;
//	public:
//		ABC();
//		void display_abc(){
//			cout<<x<<endl;
//			cout<<y<<endl;
//			cout<<z<<endl;
//		}
//	Student():y(10),x(y),z(y){
//}
//};
//	
//
//
//
//int main (){
//	Student s1;
//	s1.display_abc();
//		
//}

#include<iostream>
using namespace std;

class Student{
	int rollNo;
	string name;
	public:
		Student (int rn):rollNo(rn),name("None"){
		}
		void show()const{
			cout<<"rollNo= "<<rollNo<<endl;
			cout<<"name= "<<name<<endl;
		}
};

int main (){
const	Student s1(0);
	s1.show();
	
	return 0;
}



