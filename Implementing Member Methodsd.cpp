//section 13
//implementing Member Methods

#include<iostream>
#include<string>

using namespace std;

class Accounts {
  private:
            //attributes
            string name;
            double balance;
public:
            //methods
            //declared inline(means in the class)
            void set_balance(double bal){
                balance = bal;
            }
            double get_balance (){
                return balance;
            }
          //members will be declared outside the class declarations
          
          
          void set_name (string n);
          string get_name();
          
          
          bool deposit(double amount);
          bool withdraw(double amount);
          
};
            
            
        void Accounts ::set_name(string n){
            name = n;
        }
        string Accounts::get_name (){
            return name;
        }
        bool Accounts::deposit(double amount){
        //if verify Accounts
        balance += amount;
        return true;
        
    }
    bool Accounts :: withdraw (double amount ){
	
        if (balance >= 0){
            balance -= amount ;
            return 0;
        }
        else {
            return false;
        }
    }

int main() {
    Accounts frank_account;
    frank_account.set_name("Frank's Account");
    frank_account.set_balance(1000);
    
    if(frank_account.deposit(200))
        cout<<"Deposit Ok"<<endl;
    else 
        cout<<"Deposit not allowed"<<endl;
        
    if (frank_account.withdraw(500.0))
        cout<<"Withdrawal OK "<<endl;
    else
        cout<<"Not Sufficient funds"<<endl;
        
    if (frank_account.withdraw(1500.0))
        cout<<"Withdraw OK"<<endl;
        
    else
        cout<<"no sufficient funds"<<endl;
        
        return 0;
}
