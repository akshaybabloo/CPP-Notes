//
//  2_5_Conditions.cpp
//  CPP
//
//  Created by akshay raj gollahalli on 2/02/16.
//  Copyright © 2016 akshay raj gollahalli. All rights reserved.
//

#include <stdio.h>

int main(int argc, char ** argv){
	
	int a = 10;
	int b = 20;
	
	// traditional conditional methods
	if (a > b) { // checks if a is greater than b
		puts(" a > b"); // if the condition is true then this is returned
	} else if (a < b){ // if the first condition does not satisfy then it goes here
		puts("a < b"); // if the condition is true this is returned
	} else{ // if non of the above condition satisfies then it comes here
		puts("a == b"); // and this is returned
	}
	
	// Ternary conditon
	printf("the correct answer is %d\n", a > b ? a : b); // if a is greater than b, print a else print b
	
	return 0;
}