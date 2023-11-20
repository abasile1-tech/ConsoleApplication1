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

    Player* ptrToJohn = 0; // Declaring a new variable called ptrToJohn as a pointer of Type Player. 
    // Initialized as 0 (null) to give a null pointer exception if used before being assigned a real value
    // As a pointer of Type player, it will be able to hold (as it's value), but won't yet hold, an address in
    // memory to a Player object
    // Player* can be explained. The * means that it is a pointer holding a memory address 
    // and the type of object held at that memory address is a Player object.

    ptrToJohn = &john; // Assigning the value of ptrToJohn equal to a reference to the john object
    // this effectively stores the address in memory of the john object as the value of the ptrToJohn variable.
    // &john shows use of the "Address-of Operator" which I like to call the "Depointer Operator" because it 
    // returns the address (thus giving us the address) which is the opposite of what a pointer does, in that pointers store addresses

    cout << john.hp << endl; // 100
    
    ptrToJohn->hp -= 33; // because ptrToJohn stores (as its value) the address in memory of the john object, 
    // changing it's values actually change the values of the john object
    // in this way, ptrToJohn is an actual reference to john, not a mere copy.

    cout << john.hp << endl; // 67

    // indirect reference
    Player& indirectRefToJohn = *ptrToJohn; // indirectRefToJohn is another name for john (accessed indirectly through ptrToJohn)
    // indirectRefToJohn is a reference to an object of type Player
    // the * operator here is the "Dereference Operator". The Dereference Operator (also called the "Indirection Operator") gets the
    // reference (which is a direct-link to the value) of a pointer

    cout << indirectRefToJohn.name << endl; // John

    // direct reference
    Player& directRefToJohn = john; // directRefToJohn is yet another name for john (accessed directly)

    cout << directRefToJohn.name << endl; // John

    cout << "What is your name?" << endl;

    Player newPlayer;

    cin >> newPlayer.name;

    cout << "What is your current x position?" << endl;

    cin >> newPlayer.position.x;

    cout << "What is your current y position?" << endl;

    cin >> newPlayer.position.y;

    cout << "What is your current z position?" << endl;

    cin >> newPlayer.position.z;

    cout << "What is your current hp?" << endl;

    cin >> newPlayer.hp;

    // cout << "Here is what you told me about yourself: " << endl;

    // cout << "Name: " << newPlayer.name << endl;
    //cout << "Position (x,y,z): " << newPlayer.position.x << ", " << newPlayer.position.y << ", " << newPlayer.position.z << endl;
    printf("Here is what you told me about yourself:\nName: %s\nPosition (x,y,z): %f, %f, %f\nHP: %d\n", newPlayer.name.c_str(), newPlayer.position.x, newPlayer.position.y, newPlayer.position.z, newPlayer.hp);
    // cout << "HP: " << newPlayer.hp;

    return 0;
}
