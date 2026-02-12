#include<iostream>
using namespace std;
class player{
    private:
    int Health;
    int age;
    int score;
    bool alive;
    public:
    int getHealth(){
        return Health;
    }
     int getAge(){
        return age;
    }
    int getscore(){
        return score;
    }
    int isalive(){
        return alive;
    }
    void setHealth(int health){
        this->Health= health;
    }
    void setscore(int score){
        this->score=score;
    }
    void setage(int age){
        this->age=age;
    }
    void setIsalive(bool alive){
        this->alive=alive;
    }
    int addscore(player a,player b){
        return a.getscore()+b.getscore();
    }
    player getMaxscoreplayer(player a,player b){
        if(a.getscore()>b.getscore()){
             return a;
        }return b;
    }
};
int main(){
player harsh;
player aman;
harsh.setage(31);
harsh.setscore(534);
harsh.setHealth(70);
harsh.setIsalive(true);

aman.setage(21);
aman.setscore(54);
aman.setHealth(80);
aman.setIsalive(true);



//Static VS Dynamic Allocation
player *urvi =new player;
 urvi->setHealth(20);
 cout<<urvi->getHealth()<<endl;

// cout<<addscore(harsh,aman)<<endl;
// player sanket = getMaxscoreplayer(harsh,aman);
// cout<<sanket.getscore()<<endl;
// cout<<sanket.getHealth();
}