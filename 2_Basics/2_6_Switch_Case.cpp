//
//  2_6_Switch_Case.cpp
//  CPP
//
//  Created by akshay raj gollahalli on 2/02/16.
//  Copyright © 2016 akshay raj gollahalli. All rights reserved.
//

#include <stdio.h>

int main(int argc, char ** argv) {
	
	const int one = 1;
	const int two = 2;
	const int three = 3;
	const int four = 4;
	
	int exp = 2; // this is the condition, if this is anything other than 1,2,3 or 4 it jumps to default.
	
	switch (exp) { // its 2
		case one:
			puts("one");
			break;
		case two: // the expression satisfies this condition, so it jumps here
			puts("two");
			break;
		case three:
			puts("three");
			break;
		case four:
			puts("four");
			break;
		default:
			puts("default");
			break;
	}
	
	return 0;
}
