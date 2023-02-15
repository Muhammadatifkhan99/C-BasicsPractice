#include<iostream>
using namespace std;

class Base {
 //note friends of Base have access t0 all 
public:
    int a {0};
    
    void display (){
        std::cout<<a<<" , "<<b<<", "<<c<<" , "<<endl;
    }
protected:
            int b {0};
private:
            int c {0};
};

class Derived : public Base {
    //Note friends of derived class have access to only what is derived has access to
    //a will be public
    //b will protected
    //c will not be accessible
    
public:
        void  access_base_member (){
            a = 100;//OK
            b= 200;//OK
//            c= 300;//Not accessible
		cout<<b<<"The value of b is:"<<endl;
        }
        
};

int main (){
    cout<<"===Base member access from base objects========"<<endl;
    Base base ;
    base.a=100;//OK
//    base.b=200;//Compile Error
//    base.c=300;//Compile Error
    
//    cout<<"===Base member access from Derived objects========"<<endl;
//    Derive d;
//    d.a=100;//OK
//    d.b=200;//Compile Error
//    d.c=300;//Compile Error
    
    
    return 0;
}
