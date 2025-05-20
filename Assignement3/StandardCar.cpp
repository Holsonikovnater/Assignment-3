#include "StandardCar.hpp"
/*
“We certify that this submission is the original work of members of the group and meets 
the Faculty's Expectations of Originality”
*/
// Holsonikov Dorisca
//Id:40316045
#include <iostream> 
#include <string> 

//Default
StandardCar::StandardCar():
Car("standard",true,Date(),Date())
{}

//Parameter
StandardCar::StandardCar(bool _isAvailibleFlag,const Date& _rentaDate,const Date& _returnDate):
Car("standard",_isAvailibleFlag,_rentaDate,_returnDate)
{}
//Copy Constructor
StandardCar::StandardCar(const StandardCar& otherStandardCar):
//Since we have no addtitional members we can use the base class copy constructor
Car(otherStandardCar)
{}

void StandardCar::print()const
{
    std::cout<<"...Car Identification Number: "<<identificationNumber<<std::endl; 
    std::cout<<"Car Type : "<<type<<std::endl;
    std::cout<<"Car Availiblity Flag: "<<isAvailibleFlag<<std::endl;
    std::cout<<"Rental Date: "; 
    rentalDate.print(); 
    std::cout<<"Return Date: "; 
    returnDate.print(); 
}

// Do I have to call the base class destrctor when making the derived class desturctor? 
StandardCar::~StandardCar()
{}; 


