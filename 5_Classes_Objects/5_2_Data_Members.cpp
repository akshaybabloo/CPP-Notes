//
//  CPP-Notes
//
//  Created by Akshay Raj Gollahalli on 23/05/16.
//  Copyright © 2016 Akshay Raj Gollahalli. All rights reserved.
//

#include <cstdio>

// structure defaults to public data member
struct Some_structure {
//public: // It is same a writing public:
    int sa;
    int sb;
    int sc;
    int sd[3]; // You would have to define the array size
};

int main(int argc, char ** argv){
    
    Some_structure a = { 1, 2, 3, {4, 5, 6}};
    Some_structure *pointer = &a; // To use the structure as a pointer
    
    printf("sa = %d, sb = %d, sc = %d\n", a.sa, a.sb, a.sc); // to call a structure
    printf("sa = %d, sb = %d, sc = %d\n", pointer->sa, pointer->sb, pointer->sc); // -> is pointer selection operator
    
    // using loop to print out an array
    for (int b = 0; b<3; ++b) {
        printf("sd[%d] = %d\n", b, a.sd[b]);
    }
}

