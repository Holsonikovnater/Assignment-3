/*
“We certify that this submission is the original work of members of the group and meets 
the Faculty's Expectations of Originality”
*/
// Holsonikov Dorisca
//Id:40316045
#include "LuxuryCar.hpp"
#include <iostream> 
#include <string> 

//Default
LuxuryCar::LuxuryCar():
Car("Luxury",true,Date(),Date()){}
//Parameter
LuxuryCar::LuxuryCar(bool _isAvailibleFlag, const Date& _rentalDate, const Date& _returnDate):
Car("Luxury",_isAvailibleFlag,_rentalDate,_returnDate){}
//Copy
LuxuryCar::LuxuryCar(const LuxuryCar& otherLuxuryCar):
Car(otherLuxuryCar){} 
void LuxuryCar::print()const
{
    std::cout<<"...Car Identification Number: "<<identificationNumber<<std::endl; 
    std::cout<<"Car Type : "<<type<<std::endl;
    std::cout<<"Car Availiblity Flag: "<<isAvailibleFlag<<std::endl;
    std::cout<<"Rental Date: "; 
    rentalDate.print(); 
    std::cout<<"Return Date: "; 
    returnDate.print(); 
}

LuxuryCar::~LuxuryCar(){}
