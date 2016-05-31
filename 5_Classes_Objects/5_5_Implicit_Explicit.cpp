//
//  CPP-Notes
//
//  Created by Akshay Raj Gollahalli on 23/05/16.
//  Copyright © 2016 Akshay Raj Gollahalli. All rights reserved.
//

#include <cstdio>
using namespace std;

const size_t _maxsize = 1024; // public constant

class Some_class {
    size_t _size = 0;
public:
    explicit Some_class(const int);     // constructor: size from int
    explicit Some_class(const char *);  // constructor: size from c-string
    size_t size() const;
};

Some_class::Some_class(const int n) {
    puts("constructor: size from int");
    _size = (n <= _maxsize) ? n : 0;
}

Some_class::Some_class(const char * s) {
    puts("constructor: size from c-string");
    for(size_t i = 0; i < _maxsize; i++) {
        if(s[i] == 0) {
            _size = i;
            return;
        }
    }
    _size = 0;
}

size_t Some_class::size() const {
    return _size;
}

using namespace std;

void func(const Some_class & s) {
    printf("size is %ld\n", s.size());
}

int main( int argc, char ** argv ) {
    Some_class s("Whats up?");
    printf("size is %ld\n", s.size());
    func(Some_class(30));
    return 0;
}