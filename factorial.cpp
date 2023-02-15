#include<iostream>
using namespace std;

int main(){
	int a;
	int factorial = 1;
	cout<<"Enter a number to find a factorial :"<<endl;
	cin>>a;
	if (a < 0)
		cout<<"Error"<<endl;
		
	else {
		for(int i = 1; i <= a; i++){
			factorial =factorial * i;
		}
		cout<<factorial<<endl;
	}
}
