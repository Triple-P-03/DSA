#include <bits/stdc++.h>
// #include "hero.cpp"
using namespace std;

class hero
{
private:
    int weapons=5;
  

public:
    int health = 100;
    int level=1;
    void setHealth(int h){
        health=h;
    }
    void call()
    {

       cout << "\nmeow meow\n" ;
    }
    int getWeapons(){
        return weapons;
    }
};

int main()
{
    hero h1;
    // cout<<" size of hero hi is\t"<<sizeof(h1);
    cout << "the health of the hero is : " << h1.health;
    cout << "\nthe level of the hero is : " << h1.level;
    
    h1.call();
    cout<<"the number of weapons is: "<<h1.getWeapons()<<endl;
    
    h1.setHealth(90);
    cout << "the health of the hero is : " << h1.health;
    return 0;
}