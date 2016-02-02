//
//  2_4_String_Arrays.cpp
//  CPP
//
//  Created by akshay raj gollahalli on 2/02/16.
//  Copyright © 2016 akshay raj gollahalli. All rights reserved.
//

#include <stdio.h>

int main(int argc, char ** argv) {

	int a[5]; // Array initalize with 5 memory locations

	a[0] = 1; // Array always starts with address 0
	printf("%d\n", a[0]);

	*a = 2; // a[0] can be written as *a, that means its at address 0
	printf("%d\n", *a); // its 2

	int *b = a; // We don't have to put &. Still at address 0
	printf("%d\n", *b); // its 2

	++b; // increment address to 1
	*b = 3;
	printf("%d\n", *b);

	*(++b) = 4; // incerement address to 2 and assign 4
	printf("%d\n\n", *b);

	for (int i=0; a[i]; i++) {
		printf("a[%d] =  %d\n",i,a[i]);
	}

	puts("");

	// in C11 you can assign values directly to the array
	int arr[5] = {1,2,3,4,5};
	printf("value at arr[1] is: %d\n", arr[1]);

	return 0;
}
