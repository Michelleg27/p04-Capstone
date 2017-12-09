#include <iostream>
#include "profile.h"

using namespace std; 

profile::profile (string n, int m, int d, int y)
{
name = n; 
month = m; 
day = d; 
year = y; 


}
/*
void profile::getName(string n)
{
    name = n; 
}

void profile::getZodiac(string z)
{
    zodiac = z;
}
void profile::getBirthstone(string bs)
{
    birthstone = bs;
}
*/
void string profile::getName()
{
    return name; 
}
void string profile::getZodiac()
{
    return zodiac; 
}
void string profile::getBirthstone()
{
    return birthstone; 
}

