//
//  2_2_DefineVariables.cpp
//  CPP
//
//  Created by akshay raj gollahalli on 2/02/16.
//  Copyright © 2016 akshay raj gollahalli. All rights reserved.
//

#include <cstdio>


int main(int argc, char ** argv) {
	int someNumber = 10;
	/*
	this can also be written as
	int someNumber;
	someNumber = 10;
	 */
	const int constantNumber = 10;
	// constantNumber = 11; // this cannot be changed once initalized.
	printf("some number is %d\n", someNumber);
	printf("constant number is %d\n", constantNumber);
	return 0;
}