//
//  CPP-Notes
//
//  Created by Akshay Raj Gollahalli on 23/05/16.
//  Copyright © 2016 Akshay Raj Gollahalli. All rights reserved.
//

#include <cstdio>


class Some_class {
    int _s = 0;
    
public:
    void setter(int i) {_s = i;}
    int getter();
};

int Some_class::getter() {
    printf("%p\n", this); // pointing to this object
    return _s;
}

int main(int argc, char ** argv){
    
    int aa = 10;
    
    Some_class a;
    a.setter(aa);
    
    printf("%d\n", a.getter());
    printf("%p\n", &a); // pointing to `a` object
    // The address of `a` should be equal to Some_class

    return 0;
}