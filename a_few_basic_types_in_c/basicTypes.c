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
 * FOR SHORT, YOU TAKE YOUR OWN RISK. }}}*/ 

#include <stdio.h>

int main(void) { // void means nothing

	char character = 65; // char is a subset of int
	int integer = -1;
	unsigned int naturalNumber = 42;
	long int bigerThanInt = 5123456789;
	float floatNumber = 3.14; 
	double doubleOfFloat = 999999999.9999;

	printf("Character: %c\n", character);
	printf("Integer: %d\n", integer);
	printf("NaturalNumber: %u\n", naturalNumber);
	printf("BigerThanInt: %ld\n", bigerThanInt);
	printf("FloatNumber: %f\n", floatNumber);
	printf("DoubleOfFloat: %f\n", doubleOfFloat);


	return 0; 
}

