#include <iostream>
using namespace std;

struct Vector
{
    float x, y, z;
};

struct Player
{
    string name;
    int hp;
    Vector position;
};

int main()
{
    Player john;
    john.name = "John";
    john.hp = 100;
    john.position.x = john.position.y = john.position.z = 0;

    Player* ptrToJohn; // Declaring a new variable called ptrToJohn as a pointer of Type Player. 
    // As a pointer of Type player, it will be able to hold (as it's value), but won't yet hold, an address in
    // memory to a Player object

    ptrToJohn = &john; // Assigning the value of ptrToJohn equal to a reference to the john object
    // this effectively stores the address in memory of the john object as the value of the ptrToJohn variable.

    cout << john.hp << endl; // 100
    
    ptrToJohn->hp -= 33; // because ptrToJohn stores (as its value) the address in memory of the john object, 
    // changing it's values actually change the values of the john object
    // in this way, ptrToJohn is an actual reference to john, not a mere copy.

    cout << john.hp << endl; // 67


    return 0;
}
