//
//  1_HelloWorld.cpp
//  CPP
//
//  Created by akshay raj gollahalli on 28/01/16.
//  Copyright © 2016 akshay raj gollahalli. All rights reserved.
//

// This is a comment

/*
 This is a block code.
 */
#include <cstdio> //<- Libraries
#include <iostream>

using namespace std; //<- scope to identifiers

int main(int argc, char ** argv) {
	puts("hello"); // this statement outputs hello with a new line
	printf("hello\n"); // this is similar to puts but doesn't end with new line
	cout << "hello\n"; // more complex way to output without new line
	return 0; // 0 means success
}
