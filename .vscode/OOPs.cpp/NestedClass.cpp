#include<iostream>
using namespace std;
class Gun{
    public:
    int ammo;
    int damage;
    int scope;
    
    class player{
    private:
    int Health;
    int age;
    int score;
    bool alive;
    Gun gun;
    class Helmet{
        int hp;
        int level;
         public:
         int gethp(){
            return hp;
         }
          int getlevel(){
            return level;
         }
         void setlevel(int level){
            this->level= level;
         }
          void sethp(int hp){
            this->hp= hp;
         }
    }
    public:
    int getHealth(){
        return Health;
    }
     int getAge(){
        return age;
    }
    Gun getgun(){
        return gun;
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
    void getGun(Gun Gun){
        this->gun=gun;
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

Gun akm;
 akm.ammo(100);
 akm.scope(12);
 akm.damage(1335);

harsh.setage(31);
harsh.setscore(534);
harsh.setHealth(70);
harsh.setIsalive(true);

harsh.setGun(akm);

Gun awm;
 awm.ammo(10);
 awm.scope(120);
 awm.damage(133);

aman.setage(21);
aman.setscore(54);
aman.setHealth(80);
aman.setIsalive(true);
 aman.setGun(awm);


 




// cout<<addscore(harsh,aman)<<endl;
// player sanket = getMaxscoreplayer(harsh,aman);
// cout<<sanket.getscore()<<endl;
// cout<<sanket.getHealth();
}

