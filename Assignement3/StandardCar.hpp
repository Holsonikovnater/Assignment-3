#pragma once
/*
“We certify that this submission is the original work of members of the group and meets 
the Faculty's Expectations of Originality”
*/
// Holsonikov Dorisca
//Id:40316045
#include "Car.hpp"
#include <iostream>
#include <string> 

//Making a derived class Standard Car , inheriting from the base Car class 
class StandardCar: public Car 
{
    //Making protected in case we want to make more derived classes later on. 
    protected: 
        //The standard Car has no additional data members;
    
    public: 
    //Default
    StandardCar(); 
    //Parameter
    StandardCar(bool _isAvailibleFlag, const Date& _rentalDate, const Date& _returnDate); 
    //Copy COnstructor
    StandardCar(const StandardCar& otherStandardCar); 

    //Using the override keyword to make sure the compiler knows that im redefining a base class function and not creating a new one
    void print()const override; 

    //Destructor
    ~StandardCar(); 
};