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

int sum(int a, int b){
    return a+b;
}

const string & name(){ // & calling the reference of this function, as its big
    static string name = "akshay";
    return name;
}

int main(int argc, char ** argv) {
    printf("%d\n", sum(10,20));
    printf("%s\n", name().c_str());
    return 0;
}

