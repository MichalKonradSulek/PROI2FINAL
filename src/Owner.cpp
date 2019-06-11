/*
Project: Project2
 Author: Michal Sulek
Teacher: Wiktor Kusmirek
*/

#include <iostream>
#include <string>
#include "Owner.h"

using namespace std;

string Owner::getInfo()
{
    return surname + " " + name + " age:" + to_string(age);
}

string Owner::getName()
{
    return surname + " " + name;
}

unsigned Owner::getAge()
{
    return age;
}

void Owner::setData(string nameFeed, string surnameFeed, unsigned ageFeed)
{
    name = nameFeed;
    surname = surnameFeed;
    if(ageFeed != 0) age = ageFeed; //if ageFeed == 0, age stays unchanged
}

void Owner::setData(unsigned ageFeed)
{
    age = ageFeed;
}

Owner::Owner(string nameFeed, string surnameFeed, unsigned ageFeed)
{
    setData(nameFeed, surnameFeed, ageFeed);
}



