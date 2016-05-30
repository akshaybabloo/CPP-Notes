//
//  CPP-Notes
//
//  Created by Akshay Raj Gollahalli on 23/05/16.
//  Copyright © 2016 Akshay Raj Gollahalli. All rights reserved.
//

#include <cstdio>
#include <string>
using namespace std;

const string unk = "unknown";
const string clone_prefix = "clone_";

class Animal{
    string _type = ""; // Default private stringd
    string _name = "";
    string _sound = "";
public:
    Animal(); // default constructor
    Animal(const string & type, const string & name, const string & sound);
    
    Animal(const Animal &); // copy constructor
    Animal & operator = (const Animal &); // copy operator
    ~Animal(); // Default destructor
    void print() const; // a function called print
    
};

Animal::Animal() : _type(unk), _name(unk), _sound(unk){ // : initiliser list - this is a default constructor
    puts("default constructor");
}

// Constructor thats takes in arguments
Animal::Animal(const string & type, const string & name, const string & sound) : _type(type), _name(name), _sound(sound){
    printf("type = %s, name = %s and sound = %s\n", type.c_str(), name.c_str(), sound.c_str());
}

Animal::Animal(const Animal & a){
    puts("copy constructor");
    _name = clone_prefix + a._name;
    _type = a._type;
    _sound = a._sound;
}

Animal::~Animal(){ // Default destructor
    printf("Destructing: %s the %s\n", _name.c_str(), _type.c_str());
}

void Animal::print() const{ // Print method
    printf("%s the %s says %s\n", _name.c_str(), _type.c_str(), _sound.c_str());
}

Animal & Animal::operator=(const Animal & o){ // Operator overload
    puts("assignment operator");
    if (this != &o) {
        _name = clone_prefix + o._name;
        _type = o._type;
        _sound = o._sound;
    }
    return *this;
}


int main(int argc, char ** argv){
    Animal a; // Calling a default constructor
    a.print(); // Prints it by calling the print function
    
    const Animal b("da", "di", "du");
    b.print();

    const Animal c = b; // Copying a constructor with arguments to a default constructor via `=` copy operator
    c.print();
    
    a = c; // cloning a cloned constructor
    a.print();
    return 0;
} // After the program ends the default destructor is called.

