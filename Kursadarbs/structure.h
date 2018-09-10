#ifndef STRUCTURE_H
#define STRUCTURE_H
#include <iostream>

using namespace std;

struct detainee
{
	char name[20];
	char surname[20];
	char reason[250];
	char captured[10];
	char released[10];
	char capturedBy[20];
};

#endif