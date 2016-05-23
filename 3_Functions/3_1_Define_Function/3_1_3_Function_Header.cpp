//
//  main.cpp
//  CPP-Notes
//
//  Created by Akshay Raj Gollahalli on 23/05/16.
//  Copyright © 2016 Akshay Raj Gollahalli. All rights reserved.
//

#include <cstdio>
#include <string>
#include "3_1_3_Function_Header.h"
using namespace std;

// C++ first calls main() function
int main(int argc, char ** argv) {
    
    puts("main function"); // First this is printed out,
    function_name(); // Then this is printed out.
    return 0;
}

void function_name(){
    puts("function_name() is called");
}
