#include<iostream>
#include <cstring>
using namespace std;

class Hero {
    private:
    //properties
    // char name[100];
    int health;
    public:
    char *name;
    char level;
    static int timeToComplete ;

    Hero(){
        cout << " Simple Constructor Called" << endl;
        name = new char[100];
    }

    //parameterized constructor
    Hero(int health){
       cout << "this ->" << this << endl;
       this->health = health;
    }

    Hero(int health, char level){
       this->level = level;
       this->health = health;
    }

    //copy constructor
    Hero(Hero& temp){
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name = ch;

        cout<<"Copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;

    }

    void print(){
        cout << endl;
        cout << "[Name: " << this->name << ",";
        cout << "health: " << this->health << ",";
        cout<< "level: " << this->level << "]";
        cout << endl << endl;
    }

    

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }

    void setName(char name[]) {
        strcpy(this->name, name);
    }

    static int random(){
        return timeToComplete;
    
    }

    //Destructor
    ~Hero(){
        cout<< " Destructor bhai called" << endl;
    }

};

int Hero :: timeToComplete = 5;


int main() {

    // cout << Hero::timeToComplete << endl; //recommended
       cout << Hero::random() << endl;

    // Hero a;
    // cout << a.timeToComplete << endl; //not recommende









    // //statically
    // Hero a;

    // //Dynamic
    // Hero *b = new Hero();
    // //manually destructor
    // delete b;





    // Hero hero1;
    // hero1.setHealth(12);
    // hero1.setLevel('D');
    // char name[7] = "Rahul";
    // hero1.setName(name);

    // hero1.print();

    //use default copy constructor -->SHALLOW COPY krta hai
    // Hero hero2(hero1);
    // hero2.print();

    // hero1.name[0] = 'G';
    // hero1.print();

    // hero2.print();

    // //copy assignment operator
    // hero1 = hero2;

    // hero1.print();
    // hero2.print();



    // Hero S(70,'C');
    // S.print();

    // //Copy Constructor
    // Hero R(S);
    // R.print();

    // R.health = suresh.health;
    // R.level = suresh.level;

    










    // Hero ramesh(10);
    // // cout << "Address of ramesh " << &ramesh << endl;
    // // ramesh.getHealth();
    // ramesh.print();

    // Hero temp(22,'B');
    // temp.print();

    /*
    //static allocation
    Hero a;
    a.setHealth(80);
    a.setLevel('B');
    cout << " Level is: " << a.level << endl;
    cout << " Health is: " <<a.getHealth() << endl;

    //dynamic allocation
    Hero *b = new Hero;
    b->setHealth(70);
    b->setLevel('A');
    cout << " Level is: " << (*b).level << endl;
    cout << " Health is: " <<(*b).getHealth() << endl;

    cout << " Level is: " << b->level << endl;
    cout << " Health is: " <<b->getHealth() << endl;
    */

    // //creation of Object
    // Hero Devu;
    // cout << " Size of Devu is: " << sizeof(Devu) << endl;

    // cout << "Devu health is:" << Devu.getHealth() << endl;
    // //use setter
    // Devu.setHealth(90);
    // //Devu.health = 90;
    // Devu.level = 'D';

    // cout << "Health is: " << Devu.getHealth() << endl;
    // cout << "Level is: " << Devu.level << endl;

    // // cout << "size : " << sizeof(Devu) << endl;
     return 0;
}