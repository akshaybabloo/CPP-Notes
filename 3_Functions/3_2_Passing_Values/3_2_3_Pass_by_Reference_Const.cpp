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

void sum(const int &a, const int &b){
    printf("%d\n", a+b);
}

int main(int argc, char ** argv) {
    int a = 10;
    int b = 20;
    sum(a,b);
    return 0;
}

