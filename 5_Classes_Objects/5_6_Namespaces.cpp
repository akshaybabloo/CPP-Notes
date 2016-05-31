//
//  CPP-Notes
//
//  Created by Akshay Raj Gollahalli on 23/05/16.
//  Copyright © 2016 Akshay Raj Gollahalli. All rights reserved.
//

#include <cstdio>
#include <string>

namespace bwstring {
    const std::string prefix = "(bwstring)"; // creating a standard lib string name prefix
    
    class cust_string{ // class called string
        std::string _s = ""; // creating a standard lib string name _s
        cust_string(); // private constructor
    public:
        cust_string(const std::string & g) : _s(prefix + g) {};
        const char * c_str() {return _s.c_str();}
//        operator const std::string & () {return _s;}; // if () is used then insted of = you can use () - ###
    };
};

std::string s1 = "this is a string"; // creating a standard lib string name s1
//std::string s2("this is a string"); // If ### is uncommented you can use this

int main(int argc, char ** argv){
    bwstring::cust_string some_string = s1; // cust_string of namespace bwstring is assigned with std lib string s1
//    bwstring::cust_string some_string(s2); // If ### is uncommented you can use this
    printf("New cust_string is = %s\n", some_string.c_str());
    printf("STD string is = %s\n", s1.c_str());
    return 0;
}