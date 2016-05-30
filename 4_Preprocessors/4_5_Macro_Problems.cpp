//
//  CPP-Notes
//
//  Created by Akshay Raj Gollahalli on 23/05/16.
//  Copyright © 2016 Akshay Raj Gollahalli. All rights reserved.
//

#include <cstdio>
using namespace std;

#define MAX(a,b) (a > b ? a : b)

int incerement(){
    static int a = 20;
    a+=5;
    printf("incerement() = %d\n",a);
    return a;
}


int main(int argc, char ** argv) {
    
    int b = 20;
    
    printf("b = %d, incerement = %d and max = %d\n",b, incerement(), MAX(b, incerement()));
    // If you think the actual answer should be -
    // b = 20, incerement = 25 and max = 25
    // But thats not the case.
    
    return 0;
}

