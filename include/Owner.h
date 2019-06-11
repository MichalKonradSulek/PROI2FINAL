/*
Project: Project2
 Author: Michal Sulek
Teacher: Wiktor Kusmirek
*/

#ifndef OWNER
#define OWNER

#include <iostream>

class Owner
{
    public:
    std::string getInfo();
    std::string getName();
    unsigned getAge();
    void setData(std::string nameFeed = "Johnny", std::string surnameFeed = "Unknown", unsigned ageFeed = 1);
    void setData(unsigned ageFeed);
    Owner(std::string nameFeed = "Johnny", std::string surnameFeed = "Unknown", unsigned ageFeed = 1);
    
    private:
    std::string surname;
    std::string name;
    unsigned age;
};

#endif // OWNER
