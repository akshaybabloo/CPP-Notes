//
//  main.cpp
//  CPP-Notes
//
//  Created by Akshay Raj Gollahalli on 23/05/16.
//  Copyright © 2016 Akshay Raj Gollahalli. All rights reserved.
//

#include <cstdio>
#include <string>
using namespace std;

void hello(){
    static int a = 20;
    printf("%d\n", a);
    a = 30;
}

int main(int argc, char ** argv) {
    hello();
    hello(); // The value of a changes when this function is called
    return 0;
}
