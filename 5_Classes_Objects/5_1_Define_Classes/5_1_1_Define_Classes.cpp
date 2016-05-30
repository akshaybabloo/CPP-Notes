//
//  CPP-Notes
//
//  Created by Akshay Raj Gollahalli on 23/05/16.
//  Copyright © 2016 Akshay Raj Gollahalli. All rights reserved.
//

#include <cstdio>

class Some_class{
// private: // The Data member is a private memebr of this class
    int i; // I cannot access this variable out side the class
public:
    int a; // Can be accessed outside the class
    void setValue(const int value){
        i = value;
    }
    int getValue() const{
        return i;
    }
};

int main(int argc, char ** argv){
    int i = 10;
    int a = 20; // This int a is different from obj1.a
    Some_class obj1; // Instantiate Some_class to obj1
    
    obj1.setValue(i);
    obj1.a = a; // for public var you dont need a getter and setter implemented
    printf("The number is %d\n", obj1.getValue()); // getting the value using getter
    printf("The public int a = %d\n", obj1.a); // getting the value using public var
    return 0;
}

