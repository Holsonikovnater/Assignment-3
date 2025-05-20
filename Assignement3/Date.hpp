#pragma once 
/*
“We certify that this submission is the original work of members of the group and meets 
the Faculty's Expectations of Originality”
*/
// Holsonikov Dorisca
//Id:40316045
#include <iostream> 

class Date
{
    private: 
    int month; 
    int day; 
    int year;

    public: 
    //Default
    Date(); 
    //Paramter
    Date(int _month, int _day, int _year); 
    //Copy 
    Date(const Date& otherDate); 

    //Getters
    int getMonth()const; 
    int getDay() const; 
    int getYear() const;

    //Setters
    void setDate(int _month, int _day, int _year); 

    void print() const; 

}; 