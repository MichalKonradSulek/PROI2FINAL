/*
Project: Project2
 Author: Michal Sulek
Teacher: Wiktor Kusmirek
*/

#ifndef FUNCTIONS
#define FUNCTIONS

#include <iostream>
#include "Estate.h"
#include "Library.h"
#include "Owner.h"

template <typename vectorType> void printVector(std::vector<std::string> output)
{

    for(std::vector<std::string>::iterator i = output.begin(); i != output.end(); ++i) std::cout << *i << std::endl;
}

Owner operator+ (Owner person, unsigned number);


void print(std::string s);


#endif // FUNCTIONS
