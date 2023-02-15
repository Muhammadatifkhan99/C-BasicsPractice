#include<iostream>
#include<string>
using namespace std;

class Player{
private:
    std::string name;
    int health;
    int xp;
public:
    void set_name(std::string val){
        name = val;
    }
    //OverLoaded Constructors
    Player(){
        cout<<"No args constructor called "<<endl;
    }
    Player(std:: string name){
        cout<<"String args constructor called "<<endl;
    }
    Player(std::string name , int health , int xp){
        cout<<"Three args constructor called "<<endl;
    }
    ~Player(){
        cout<<"Destructor called for "<<name<<endl;
    }
};

int main(){
    {
        Player slayer;
        slayer.set_name("Khan Awan");
    }
    {
        Player frank;
        frank.set_name("Frank");
        Player hero;
        hero.set_name("Hero");
        Player villain ("villain",100,12);
        villain.set_name("villain");
    }
    Player *enemy = new Player;
    enemy ->set_name("Enemy");
    
    Player *level_boss = new Player("Level Boss",1000,300);
    level_boss->set_name("Level Boss");
    
    delete enemy;
    delete level_boss;
    
    return 0;
}
