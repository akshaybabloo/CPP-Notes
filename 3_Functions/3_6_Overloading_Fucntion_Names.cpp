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

void name(){
    puts("my name is akshay");
}

string name(string a){
    return a;
}

int main(int argc, char ** argv) {
    name();
    printf("my name is %s\n", name("Raj").c_str());
    
    return 0;
}

