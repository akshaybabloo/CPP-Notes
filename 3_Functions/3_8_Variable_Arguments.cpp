//
//  main.cpp
//  CPP-Notes
//
//  Created by Akshay Raj Gollahalli on 23/05/16.
//  Copyright © 2016 Akshay Raj Gollahalli. All rights reserved.
//

#include <cstdio>
#include <cstdarg>
using namespace std;

double avg (const int count, ...){
    va_list ap; // It is a macro and is used as a parameter
    int i;
    double total = 0.0;
    
    va_start(ap, count); // Initialize a variable argument list
    
    for (i=1; i<count; ++i) {
        total += va_arg(ap, double); // Retrieve next argument as double
    }
    va_end(ap); // Ends using variable argument list
    return total/count;
}

// printf() works something like this.
double message(const char * ch, ...){
    va_list ap;
    va_start(ap, ch);
    int rc = vfprintf(stdout, ch, ap); // Write formatted data from variable argument list to stream
    puts("");
    va_end(ap);
    return rc;
}

int main(int argc, char ** argv) {
    printf("%lf\n", avg(5,1.5,1.2,1.3,1.7,1.6));
    message("The average is %lf\n", avg(5,1.5,1.2,1.3,1.7,1.6));
    return 0;
}

