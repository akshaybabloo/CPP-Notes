//
//  CPP-Notes
//
//  Created by Akshay Raj Gollahalli on 23/05/16.
//  Copyright © 2016 Akshay Raj Gollahalli. All rights reserved.
//

#include <cstdio>

class Some_class{
    int i;
public:
    void setValue(const int value);
    int getValue(); // you can have same function with different signatures
    int getValue() const;
};

void Some_class::setValue(const int value){
    i = value;
}

int Some_class::getValue(){
    return i;
}

int Some_class::getValue() const{
    return i;
}

int main(int argc, char ** argv){
    int i = 10;
    Some_class obj1;
    Some_class const obj2 = obj1;
    
    obj1.setValue(i);
//    obj2.setValue(i); // you cannot set a value as it is c++ constant
    printf("The number is %d\n", obj1.getValue());
    printf("The number is %d\n", obj2.getValue());
    return 0;
}

