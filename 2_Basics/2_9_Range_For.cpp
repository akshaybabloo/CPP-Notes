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

int main(int argc, char ** argv) {
    
    int a[]={1,2,3,4};
    
    for (int b=0; b<4; ++b) {
     // (Initalise, condition, incrment)
        printf("Index of array a is %d and its content is %d\n", b, a[b]);
    }
    
    // For Integer
    
    int c[]={1,2,3,4};
    
    for (int d : c) {
        // (Initalise, condition, incrment)
        printf("Index of array c is %d and its content is %d\n", d-1, d);
    }
    
    // For char
    
    char e[]="akshay";
    
    for (char f : e) {
        // (Initalise, condition, incrment)
        // to remove the blank line you can put
        // if (f == 0) break;
        printf("contents %c\n", f);
        // this will print with a blank line as a string always ends with 0
    }
    
    // Using STL strings
    string g = "Akshay";
    for (char h : g) {
        printf("Contents %c\n", h);
    }

}
