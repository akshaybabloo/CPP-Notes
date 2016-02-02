//
//  2_4_2_String.cpp
//  CPP
//
//  Created by akshay raj gollahalli on 2/02/16.
//  Copyright © 2016 akshay raj gollahalli. All rights reserved.
//

#include <stdio.h>

int main (int argc, char ** argv){

	char a[6] = {'a', 'b', 'c', 'd', 'e', 0};

	printf("The character at a[1] is = %c\n", a[1]); // print a character
	printf("The string is %s\n\n", a);
	
	// Loop using address number
	for (int i = 0; a[i]; i++) {
		printf("Character at a[%d] is: %c\n",i,a[i]);
	}
	
	puts("");
	
	char b[] = "akshay";
	printf("The character at b[0] is = %c\n", b[0]);
	printf("My name is %s\n",b);
	
	// Loop using pointers
	for (char *ptr = b; *ptr; ptr++) {
		printf("its %c\n", *ptr);
	}

}
