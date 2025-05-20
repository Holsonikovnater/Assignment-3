/*
“We certify that this submission is the original work of members of the group and meets 
the Faculty's Expectations of Originality”
*/
// Holsonikov Dorisca
//Id:40316045
#include "Date.hpp"
#include <iostream> 
#include <iomanip>

//Default

Date::Date()
{
    month = 0 ; 
    day = 0 ; 
    year = 0 ; 
} 
//Paramter
Date::Date(int _month, int _day, int _year):
month(_month), 
day(_day), 
year(_year){} 
//Copy 
Date::Date(const Date& otherDate):
month(otherDate.month), 
day(otherDate.day), 
year(otherDate.year){}

//Getters
int Date::getMonth()const{return month;}
int Date::getDay() const{return day;} 
int Date::getYear() const{return year;}

//Setters
void Date::setDate(int _month, int _day, int _year)
{
    month = _month; 
    day = _day; 
    year = _year; 
} 

void Date::print() const
{
    //Using the set width and set fill to print out numbers like 1 as 01
    std::cout<<month<<"-"<<std::setfill('0')<<std::setw(2)<<day<<"-"<<year<<std::endl;
}