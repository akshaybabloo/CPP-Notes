//
//  main.cpp
//  CPP-Notes
//
//  Created by Akshay Raj Gollahalli on 23/05/16.
//  Copyright © 2016 Akshay Raj Gollahalli. All rights reserved.
//

#include <cstdio>
using namespace std;

void call_me(){
    puts("hello");
}

int main(int argc, char ** argv) {
    void (*function_pointer)()=call_me; // you can put &call_me, thats optional
    function_pointer(); // you can put (*function_poinyer)(), thats optional
    
    return 0;
}

