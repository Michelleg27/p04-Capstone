#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "profile.h"
using namespace std; 


int main()
{
       
      // profile myprofile; 
      string name;  
      string zodiac; 
      string birhtstone; 
        int age;
        int month; 
        int day; 
        int year; 
        int tmonth; 
        int tday; 
        int tyear; 
        char input; 
      // myprofile.getAge(age); 
      // cout<<age; 

     // for ( int i=0; i<profiles.size(); i++)
  
           
        do
        {
        cout<<"Would you like to add a new person?"<<endl; 
        cout<<"Enter (Y/N)"<<endl;
        cin>>input;
        }
        while (input == 'Y' || input =='y');
        {
      
        
                cout<<"Enter your name"<<endl;
                cin>>name; 
                cout<<"Enter date of birth (m/d/y)"<<endl; 
                cin>>month; 
                cin>>day; 
                cin>>year; 
                cout<<"Enter today's date m/d/y"<<endl; 
                cin>>tmonth;
                cin>>tday;
                cin>>tyear; 
           
        }
       /* cout<<"Name:  "<<profile.getName(); 
        cout<<"Date of birth:  "<<profile.getBirth(); 
        cout<<"Todays date:  "<<profile.getDate(); 
        cout<<"Zodiac:  "<<profile.getZodiac(); 
        cout<<"Birthstone:  "<<profile.getBirthstone(); 
        */
        ofstream myprofile; 
       myprofile.open ("profile.txt");

        
         
        if (month<=4 && day<=20 || month>=3 && day>=20)
        {
                cout<<"Your zodiac sign is Aries"<<endl; 
        }
        else if (month<=5 && day<= 21 || month>=4 && day>20)
        {
                cout<<"Your zodiac sign is Taurus"<<endl;
        }
        else if (month<=6 && day<=21 || month>=5 || day>=21)
        {
                cout<<"Your zodiac sign is Gemini"<<endl; 
        }
        else if (month<=7 && day<=23 || month>=6 && day>=21)
        {
                cout<<"Your zodiac sign is Cancer"<<endl;
        }
        else if (month<=8 && day<=23 || month>=7 && day>=23)
        {
                cout<<"Your zodiac sign is Leo"<<endl; 
        }
        else if (month<=9 && day<=23 || month>=8 && day>=23)
        { 
                cout<<"Your zodiac sign is Virgo"<<endl; 
        }
        else if (month<=10 && day<=23 || month>=9 && day>=23)
        {
                cout<<"Your zodiac is Libra"<<endl; 
        } 
        else if (month<=11 && day<=22 || month>=10 && day>=23)
        {
                cout<<"Your zodiac sign is Scorpio"<<endl; 
        }
        else if (month<=12 && day<=22 || month>=11 && day>=22)
        {
                cout<<"Your zodiac sign is Sagittarius"<<endl; 
        }
        else if (month<=1 && day<=20 || month>=12 && day>=23)
        {
                cout<<"Your zodiac sign is Capricorn"<<endl; 
        }
        else if (month<=2 && day<=18 || month>=1 && day>=20)
        {
                cout<<"Your zodiac sign is Aquarius"<<endl;
        }
        else 
        {
                cout<<"Pisces"<<endl; 
        }

                    
      
        
        if (month = 1)
        {
            cout<<"Your birthstone is Garnent"<<endl;
        }
        else if (month = 2)
        {
            cout<<"Your birthstone is Amethyst"<<endl; 
        }
        else if ( month = 3)
        {
            cout<<"Your birthstone is Aquamarine"<<endl;
        }
        else if ( month = 4)
        { 
            cout<<"Your birthstone is Diamond"<<endl; 
        }
        else if ( month = 5)
        {
            cout<<"Your birthstone is Emerald"<<endl; 
        }
        else if (month = 6)
        {
            cout<<"Your birthstone is slipt into two; Pearls and Alexandrite"<<endl; 
        }
        else if (month = 7)
        {
            cout<<"Your birthstone is Rubies"<<endl; 
        }
        else if (month = 8)
        {
            cout<<"Your birthstone is Peridot"<<endl;
        }
        else if (month = 9)
        {
            cout<<"Your birthstone is Sapphire"<<endl;
        }    
        else if (month = 10)
        { 
            cout<<"Your birthstone is split into two: Tourmaline and Opal"<<endl;
        }
        else if (month = 11)
        { 
            cout<<"Your birthstone is split into two: Citrine and Topaz"<<endl; 
        }
        else 
        {
            cout<<"Your birthstone is split into three: Zircon, Tanzanite, and Turquoise"<<endl; 
        }
                return 0; 
        }
    
//astrological sign 
/*asks for your name, birthday 
  prints age, astrological sign , saves up to 15 contacts, repeats shows the user that last 5 ppl that were inputed
 */
//every person has a profile but they are all saved in a .txt file     
