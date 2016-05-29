//
//  main.cpp
//  CPP-Notes
//
//  Created by Akshay Raj Gollahalli on 23/05/16.
//  Copyright © 2016 Akshay Raj Gollahalli. All rights reserved.
//

#include <cstdio>
using namespace std;


// Factorial using for loop
int factorial(int n){
    int fact = 0;
    for (int i = 0; i <= n; i++){
        if (i == 0)
            fact = 1;
        else
            fact = fact * i;
    }
    return fact;
}


// Factorial using recursive function
int recursive_factorial(int n){
    if (n < 2) {
        return 1;
    }
    else{
        return recursive_factorial(n-1) * n;
    }
}

int main(int argc, char ** argv) {
    printf("%d\n", recursive_factorial(4));
    printf("%d\n", factorial(4));
    return 0;
}

