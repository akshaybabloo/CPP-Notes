//
//  CPP-Notes
//
//  Created by Akshay Raj Gollahalli on 23/05/16.
//  Copyright © 2016 Akshay Raj Gollahalli. All rights reserved.
//

#include <cstdio>
#include <new>
#include <iostream>
using namespace std;

class Some_class {
    int _a = 0;
    int _b = 0;
    int _c = 0;
public:
    Some_class(int i = 0);
    ~Some_class();
    int get_a() {return _a;}
    int get_b() {return _b;}
    int get_c() {return _c;}
};

Some_class::Some_class(int i): _a(i), _b(i + 1), _c(i + 2){
    static int bb = 1;
    printf("A constructor is called %d\n", bb);
    ++bb;
}

// Destructor
Some_class::~Some_class(){
    static int aa = 1;
    printf("dtr called %d \n", aa);
    ++aa;
}

int main( int argc, char ** argv ) {
    
    Some_class *var1 = new (nothrow) Some_class; // nothrow will not throw any exception if found.
    Some_class *var2 = new (nothrow) Some_class[3]; // constructor will be called 3 times due to array size
    Some_class *var3 = new (nothrow) Some_class(10);
    
    // If an nullpts occurs
    if (var1 == nullptr || var2 == nullptr || var3 == nullptr) {
        puts("new Some_class failed");
        return 1;
    }
    
    // Printing
    printf("a = %d, %d, %d\n", var1->get_a(), var1->get_b(), var1->get_c());
    printf("b = %d, %d, %d\n", var2->get_a(), var2->get_b(), var2->get_c());
    printf("b = %d, %d, %d\n", var3->get_a(), var3->get_b(), var3->get_c());
    
    // Destructor
    delete var1; // Destructor is called
    delete[] var2; // Destructor for array is called, 3 times
    delete var3;
    
    puts("Some_class deleted"); // destructor is called before the end end of the file.
    return 0;
}
