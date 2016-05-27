//
//  main.cpp
//  CPP-Notes
//
//  Created by Akshay Raj Gollahalli on 23/05/16.
//  Copyright © 2016 Akshay Raj Gollahalli. All rights reserved.
//

#include <cstdio>
using namespace std;

class A{
    int a;
public:
    A(const int &a) : a(a){}
    const int & value() const {return a;}
};

// The + operator acts as a multiplication operator
int operator + (const A & lhs, const A & rhs){
    puts("operator + for class A");
    return lhs.value() * rhs.value();
}

int main(int argc, char ** argv) {
    
    A a(7);
    A b(42);
    printf("the value is %d\n", a+b);
    
    return 0;
}

