#include<iostream>
using namespace std;

class Player{
  public:
            //attrubutes
            string name;
            int health ;
            int xp;
            
            //methods
            void talk(string text_to_say){cout<<name<<" say "<<text_to_say<<endl;
        }
            bool is_dead();
            
};


class Accounts {
    public:
    //attributes
    string name;
    double balance;
            
    //methods
            
    bool deposit (double bal){balance += bal; cout <<"in deposit"<<endl;
	}
    bool withdraw (double bal){balance -= bal; cout<<"in withdraw"<<endl;
	}
            
            
};


int main() {
    Accounts franks_account;
    franks_account.name = "Frank's account";
    franks_account.balance = 5000.0;
    
    franks_account.deposit (1000.0);
    franks_account.withdraw(500.0);
    
    Player frank;
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;
    frank.talk ("Hi there");
    
    Player *enemy = new Player;
    (*enemy).name ="Enemy";
    (*enemy).health= 100;
    
    enemy -> xp = 15;
    
    enemy -> talk ("I will destroy you");
    return 0;
}
