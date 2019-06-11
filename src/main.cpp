/*
Project: Project2
 Author: Michal Sulek
Teacher: Wiktor Kusmirek
*/

#include <iostream>
#include <string>
#include "Owner.h"
#include "Estate.h"
#include "Library.h"
#include "functions.h"

using namespace std;

int main()
{
    Owner andrew;
    Owner steve("Steve", "Kowalsky", 46);
    andrew.setData();
    cout << andrew.getInfo() << endl;
    andrew.setData("Tom", "Cruise", 78);
    cout << andrew.getInfo() << endl;
    andrew = andrew + 15;
    cout << andrew.getInfo() << endl;
    andrew.setData("Tomek", "Podroznik", 0);
    cout << andrew.getInfo() << endl;
    cout << andrew.getInfo() << endl << steve.getInfo() << endl;


    Estate<unsigned> house;
    house.setData("Domek", "Niebuszewo", 103, 1000000, &andrew);
    cout << house.getInfo() << endl;

    Library data;
    cout << "Estates:" << endl;
    printVector<string>(data.showEstates());
    data.add(andrew);
    data.add(steve);
    data.add(house);
    data.add(house);
    cout << "Estates:" << endl;
    printVector<string>(data.showEstates());
    cout << "Owners:" << endl;
    printVector<string>(data.showOwners());

    return 0;
}
