#include <string>

using namespace std; 

#ifndef _PROFILE_H_
#define _PROFILE_H_



class profile 
{
    public:
        profile(string, int, int, int); 
     void setName(string &); 
     void setZodiac(); 
     void setBirthstone(); 
     void setAge (int month, int day, int year, int tmonth, int tday, int tyear); 
        string getName(); 
        string getZodiac(); 
        string getBirthstone(); 
        int getAge (int &);
       // vector <int> bd;
       // string name; 
       // int age; 
       // myprofile.getAge(age); 
       // myprofile.getName(name); 
       // cout<<age; 
       // cout<<name; 
       
     private:
        string name; 
        string zodiac; 
        string birthstone;
        int month; 
        int day;
        int year;
        int tmonth; 
        int tday; 
        int tyear; 
        char input; 


          
}; 
#endif
