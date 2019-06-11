/*
Project: Project2
 Author: Michal Sulek
Teacher: Wiktor Kusmirek
*/

#ifndef LIBRARY
#define LIBRARY

#include <iostream>
#include <vector>
#include <string>
#include "Estate.h"
#include "Owner.h"

class Library
{
    public:
        Library();
        ~Library();
        void add(Estate<unsigned> estateFeed);
        std::vector<std::string> showEstates();
        void add(Owner estateFeed);
        std::vector<std::string> showOwners();

    private:
        std::vector<Estate<unsigned>> *estates;
        std::vector<Owner> *owners;
};

#endif // LIBRARY
