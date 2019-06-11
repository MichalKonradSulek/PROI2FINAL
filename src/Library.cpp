/*
Project: Project2
 Author: Michal Sulek
Teacher: Wiktor Kusmirek
*/

#include <iostream>
#include <string>
#include <vector>
#include "Library.h"
#include "functions.h"

using namespace std;

Library::Library()
{
    estates = new vector<Estate<unsigned>>;
    owners = new vector<Owner>;
}

Library::~Library()
{
    delete(estates);
    delete(owners);
}

void Library::add(Estate<unsigned> estateFeed)
{
    estates->push_back(estateFeed);
}

vector<string> Library::showEstates()
{
    vector<string> output;
    for(vector<Estate<unsigned>>::iterator i = estates->begin(); i != estates->end(); ++i)
    {
        output.push_back(i->getInfo());
    }
    return output;
}

void Library::add(Owner ownerFeed)
{
    owners->push_back(ownerFeed);
}

vector<string> Library::showOwners()
{
    vector<string> output;
    for(vector<Owner>::iterator i = owners->begin(); i != owners->end(); ++i)
    {
        output.push_back(i->getInfo());
    }
    return output;
}

