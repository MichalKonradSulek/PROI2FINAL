/*
Project: Project2
 Author: Michal Sulek
Teacher: Wiktor Kusmirek
*/

#ifndef ESTATE
#define ESTATE

#include <iostream>
#include <string>
#include "Owner.h"

template <typename priceType>
class Estate
{
    private:
    std::string name;
    std::string district;
    unsigned age;
    priceType price;
    Owner *owner;

    public:
    std::string getInfo();
    void setData(std::string nameFeed, std::string districtFeed, unsigned ageFeed, int price = 0, Owner *ownerFeed = 0);
};

template <typename priceType>
std::string Estate<priceType>::getInfo()
{
    return name + " distr:" + district + " age:" + std::to_string(age) + " price:" + std::to_string(price) + " owner:" + owner->getName();
}

template <typename priceType>
void Estate<priceType>::setData(std::string name, std::string district, unsigned age, int price, Owner *owner)
{
    this->name = name;
    this->district = district;
    this->age = age;
    this->price = price;
    this->owner = owner;
}

#endif // ESTATE
