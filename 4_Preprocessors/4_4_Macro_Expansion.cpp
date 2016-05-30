//
//  CPP-Notes
//
//  Created by Akshay Raj Gollahalli on 23/05/16.
//  Copyright © 2016 Akshay Raj Gollahalli. All rights reserved.
//

#include <cstdio>
using namespace std;

#define ADD(a,b) (a + b)


int main(int argc, char ** argv) {
    
    int aa = 10;
    int bb = 20;
    
    printf("Age is %d\n", ADD(aa, bb));
//    printf("Age is %d\n", (a + b)); // The parameter macro is expanded like this.
    
    return 0;
}

