//
//  main.cpp
//  CPP-Notes
//
//  Created by Akshay Raj Gollahalli on 23/05/16.
//  Copyright © 2016 Akshay Raj Gollahalli. All rights reserved.
//

#include <cstdio>

int main(int argc, char ** argv) {
    
    int a[]={1,2,3,4};
    int b = 0;
    
    while (b<4) {
        printf("index of array a is %d and its content is %d\n", b, a[b]);
        ++b;
    }
    
    int c[]={1,2,3,4};
    int d = 0;
    
    // Another way of doing While loop is Do.. While..
    do {
        printf("index of array c is %d and its content is %d\n", d, c[d]);
        ++d;
    }while (d<4);
    
    return 0;
}
