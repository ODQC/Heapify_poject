#pragma once
#include<iostream>
#include <string>
#include<sstream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <ostream>

int NumGeneratorByRange(int maximum_number, int minimum_number)
{

	srand(time(0));
	const int new_number = (rand() % (maximum_number + 1 - minimum_number)) + minimum_number;
	return new_number;

}