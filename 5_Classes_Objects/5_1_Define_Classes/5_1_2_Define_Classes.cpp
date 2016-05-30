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
    void setValue(const int value); // declare function
    int getValue() const;
};

// define declared function
void Some_class::setValue(const int value){
    i = value;
}

int Some_class::getValue() const{
    return i;
}

int main(int argc, char ** argv){
    int i = 10;
    int a = 20;
    Some_class obj1;
    
    obj1.setValue(i);
    obj1.a = a;
    printf("The number is %d\n", obj1.getValue());
    printf("The public int a = %d\n", obj1.a);
    return 0;
}

