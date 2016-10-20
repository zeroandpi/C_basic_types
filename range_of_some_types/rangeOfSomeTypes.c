/* Copyright (c) 2016 Zero, https://www.cognitio.tech{{{
 *
 * Permission is hereby granted, free of charge,
 * to any person obtaining a copy of this files.
 * To deal in the Files without restriction,
 * including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense,
 * and/or sell, copies of the Files
 *
 * THE FILES IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,...
 * FOR SHORT, YOU TAKE YOUR OWN RISK.}}} */


#include <stdio.h>
#include <float.h>
#include <limits.h>
/* demonstrate range of some types
 * this file took from internet
 * overridden by zero because the name of some constants were changed */
int main(void) {
	printf("Storage size for int : %lu \n", sizeof(int));
	printf("Minimum int value: %d\n", INT_MIN);
	printf("Maximum int value: %d\n", INT_MAX);
	printf("Maximum unsigned int value: %u\n\n", UINT_MAX);

	printf("Storage size for float : %lu \n", sizeof(float));
	printf("Minimum float positive value: %E\n", FLT_MIN );
	printf("Maximum float positive value: %E\n", FLT_MAX );
	printf("Precision value: %d\n\n", FLT_DIG );
			        
	printf("Storage size for double : %lu \n", sizeof(double));
	printf("Minimum double positive value: %E\n", DBL_MIN );
	printf("Maximum double positive value: %E\n", DBL_MAX );
	printf("Precision value: %d\n", DBL_DIG );
					    				    
	return 0;
}
