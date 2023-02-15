#include<iostream>
using namespace std;

const double dollar {158.3};
double converttorupee(double Rupees){
	
	double result {0};
	result = Rupees * dollar;
	return  result;
	
}

int main (){
	
	double rupees1{0};
	const double dollar1{158.4};
	
	cout<<"Enter the amount of money in rupees: "<<endl;
	cin>>rupees1;
	cout<<"The amount in dollars is: "<<converttorupee(rupees1)<<endl;
	
	return 0;	
}
