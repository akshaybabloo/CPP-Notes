//
//  CPP-Notes
//
//  Created by Akshay Raj Gollahalli on 23/05/16.
//  Copyright © 2016 Akshay Raj Gollahalli. All rights reserved.
//

#include <cstdio>
using namespace std;

#define NUMBER 12 // Preprocessor macro
#define STRING "Hello!" // Preprocessor macro

int main(int argc, char ** argv) {
    
    const int SOME_NUMBER = 21; // C++ constant
    printf("SOME_NUMBER = %d and it's address is 0x%p\n", SOME_NUMBER, (void *)&SOME_NUMBER);
    
    printf("%d\n", NUMBER);
//    printf("%d\n", 12); // before the code goes to the compile the macro is replace by literal value.
    
    printf("%s\n", STRING);
//    printf("%s\n", "Hello!");
    
    return 0;
}

