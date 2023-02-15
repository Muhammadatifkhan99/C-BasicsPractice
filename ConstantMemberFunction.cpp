//#include<iostream>
//using namespace std;
//
//class Student{
//	int val;
//	public:
//		Student(int x=0){
//			val = x;
//		}
//		int get_value()const{
//		return val;
//		}
//};
//int main (){
//	Student d (23);
//	Student d1 (8);
//	cout << "The value using object d : " << d.get_value();
//   	cout << "\nThe value using object d1 : " << d1.get_value();
//   	
//   	
//   	return 0;
//}

#include<iostream>

using namespace std;

class Test {
	int value;
public:
	Test(){}
	Test(int a):value{a}{
		
	}
	void display()const
    {
        cout<<"Hello world I'm Rancho "
        "Baba Inside display() Function"<<endl;
    }
};
int main()
{
   //Constant object are initialised at the time of declaration using constructor
    const Test d1;
    //d1.showMessage();Error occurred if uncomment.
    d1.display();
    return(0);
}
