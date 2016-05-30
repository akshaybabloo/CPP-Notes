//
//  CPP-Notes
//
//  Created by Akshay Raj Gollahalli on 23/05/16.
//  Copyright © 2016 Akshay Raj Gollahalli. All rights reserved.
//

#include <cstdio>
using namespace std;

#include "preprocessor.h"

int main(int argc, char ** argv) {
    
    
    printf("SOME_NUMBER = %d and it's address is %p\n", SOME_NUMBER, (void *)&SOME_NUMBER);
    
    printf("%d\n", NUMBER);
//    printf("%d\n", 12); // before the code goes to the compile the macro is replace by literal value.
    
    printf("%s\n", STRING);
//    printf("%s\n", "Hello!");
    
    return 0;
}

