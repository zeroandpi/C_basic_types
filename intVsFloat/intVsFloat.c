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

int main(void) {

	int i_one = 1; // x0000000 00000000 00000000 00000001
	float f_one = 1.0;

	int flip_i_one = ~i_one; // ~x1111111 11111111 11111111 11111110, assume x = 0 -> ~x = 1
	float flip_f_one = ~f_one; // comment out this line

	printf("flip_i_one: %d\n", flip_i_one);

	return 0;
}
