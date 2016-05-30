//
//  CPP-Notes
//
//  Created by Akshay Raj Gollahalli on 23/05/16.
//  Copyright © 2016 Akshay Raj Gollahalli. All rights reserved.
//

#include <cstdio>
using namespace std;

#define LOOPER(i) do \
                { \
                    printf("%d\n",i++); \
                } while (i < 3);


int main(int argc, char ** argv) {
    
    int a = 0;
    
    LOOPER(a);
    
    return 0;
}

