//
//  2_3_Pointers_Reference.cpp
//  CPP
//
//  Created by akshay raj gollahalli on 2/02/16.
//  Copyright © 2016 akshay raj gollahalli. All rights reserved.
//

#include <cstdio>

int main(int argc, char ** argv) {
	int a = 10;
	int b = 20;
	int *pointer = &a; // a pointer referencing to the address of a
	int &reference = b; // a reference of b is saved in `reference`
	
	
	printf("value of a is %d\n", a);
	printf("the address &a is %p\n", &a);// printing the address of a
	printf("value of *pointer is %d\n\n", *pointer); // pointer to the reference of a
	
	*pointer = 30; // when the pointer value is changed even the int value is changed
	
	printf("value of a is %d\n", a);
	printf("the address &a is %p\n", &a);// printing the address of a
	printf("value of *pointer is %d\n\n", *pointer); // pointer to the reference of a
	
	printf("value of b is %d\n", b);
	printf("reference of b is %d\n", reference); // reference of b
	printf("%p\n", &b); // Address of b
	printf("%p\n", &reference); // Address of b in reference
	
	return 0;

}
