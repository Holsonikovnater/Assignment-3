
/*
“We certify that this submission is the original work of members of the group and meets 
the Faculty's Expectations of Originality”
*/
// Holsonikov Dorisca
//Id:40316045

#include "Car.hpp"

#include <iostream> 
#include <string> 
//Initilizing the static next id variable
int Car::nextIdentificationNumber = 1;
//Making the default constructor
Car::Car():
identificationNumber(nextIdentificationNumber++), 
type(""), 
isAvailibleFlag(true),
//Making a default date object for rental and return
rentalDate(),
returnDate()

{} 

//Parameter
Car::Car(std::string _type, bool _isAvailibleFlag, const Date& _rentalDate,const Date& _returnDate):
identificationNumber(nextIdentificationNumber++), 
type(_type), 
isAvailibleFlag(_isAvailibleFlag), 
rentalDate(_rentalDate), 
returnDate(_returnDate)

{}

//Copy
Car::Car(const Car &otherCar):
identificationNumber(otherCar.identificationNumber),
type(otherCar.type),
isAvailibleFlag(otherCar.isAvailibleFlag),
rentalDate(otherCar.rentalDate), 
returnDate(otherCar.returnDate)
{}//This will behave identically to the default one since we have no pointer data members

//Getters
int Car::getIdentificationNumber() const{return identificationNumber;}
std::string Car::getType() const{return type;}
bool Car::getIsAvailibleFlag() const{return isAvailibleFlag;}; 
const Date& Car::getRentalDate() const{return rentalDate;} 
const Date& Car::getReturnDate() const{return returnDate;} 

//Setters
/*
void Car::setIdentificationNumber(int _identificationNumber)
{
    identificationNumber = _identificationNumber; 
} 
*/

//No set type because it is constant
/*
    void Car::setType( std::string _type)
{
    type = _type; 
}

*/

void Car::setIsAvailibleFlag(bool _isAvailibleFlag)
{
    isAvailibleFlag = _isAvailibleFlag; 
} // To make it abstract , do we only have to make one of these functions purely virtual? 
void Car::setRentalDate(const Date& _rentalDate){rentalDate = _rentalDate;} 
void Car::setReturnDate(const Date& _returnDate){returnDate = _returnDate;}

//Print is pure virtual