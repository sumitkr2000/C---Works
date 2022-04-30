#include <iostream>
#include <cstring>
using namespace std;

// creating class
class Hero
{

    // properties of object
private:
    int health;

public:
    char level;
    char *name;
    static int TimeToComplete;

    // default constructor
    Hero()
    {
        cout << "contstructor called" << endl;
        name = new char[100];
    }

    // parameterised character
    Hero(int health)
    {
        this->health = health;
    }

    Hero(int health, char level)
    {

        this->health = health;
        this->level = level;
    }

    // copy constructor called
    Hero(Hero &temp)
    {

        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char l)
    {
        level = l;
    }

    static int random()
    {

        return TimeToComplete;
    }

    void print()
    {
        cout << "[Name: " << this->name << ", ";
        cout << "Health: " << this->health << ", ";
        cout << "Level: " << this->level << "]" << endl;
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    ~Hero()
    {
        cout << "destructor called" << endl;
    }
};

int Hero::TimeToComplete = 10;

int main()
{

    cout << "Time to complete the game: " << Hero::random() << endl;

    Hero a;

    // not recommended to use
    cout << "Time to complete the game: " << a.TimeToComplete << endl;

    /*
    //automatic constructor ans destructor called
    Hero h1;

    //automatic contstructor called but destructor is called manually
    Hero *h2 = new Hero;
    delete h2;

    /*
    Hero h1;

    h1.setHealth(100);
    h1.setLevel('A');
    char name[6] = "Sumit";
    h1.setName(name);

    //h1.print();

    Hero h2(h1);

    //h2.print();

    h1.name[0] = 'D';

    h1.print();
    h2.print();

    h1 = h2;

    h1.print();
    h2.print();

    /*
    Hero ramesh(10, 'A');

    ramesh.print();

    Hero suresh(ramesh);

    suresh.print();

    /*
    //creating object

    //static allocation
    Hero Paul;

    Paul.setLevel('A');
    Paul.setHealth(80);
    cout<<"Health of Paul is "<<Paul.getHealth()<<endl;
    cout<<"Level of Paul is "<<Paul.getLevel()<<endl;

    //dynamically
    Hero *Tom = new Hero;
    Tom->setLevel('B');
    Tom->setHealth(70);

    cout<<"Health of Tom is "<<(*Tom).getHealth()<<endl;
    cout<<"Level of Tom is "<<(*Tom).getLevel()<<endl;


    cout<<"Health of Tom is "<<Tom->getHealth()<<endl;
    cout<<"Level of Tom is "<<Tom->getLevel()<<endl;

    //cout<<"size of Paul is "<<sizeof(Paul);
    */

    return 0;
}