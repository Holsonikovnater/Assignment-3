/*
“We certify that this submission is the original work of members of the group and meets 
the Faculty's Expectations of Originality”
*/
// Holsonikov Dorisca
//Id:40316045

#pragma once

#include "Date.hpp"
#include <iostream>
#include <string> 

class Car 
{
    //Making these attributes protected so that the derived classes have direct acces to them
    protected: 
    //Making id static so that we can increment it and have unique id's.
    static int nextIdentificationNumber; 
    int identificationNumber;// Have to figure out how to make this static 
    const std::string type; 
    bool isAvailibleFlag;
    Date rentalDate; 
    Date returnDate;  

    public: 
    //Constructors
        //Default 
    Car(); 
        //Parameter
    Car(std::string _type, bool _isAvailibleFlag, const Date& _rentalDate, const Date& _returnDate); 
        //Copy
    Car(const Car &otherCar); //This will behave identically to the defualt one since we have no pointer data members

    //Getters
    int getIdentificationNumber() const; 
    std::string getType() const; 
    bool getIsAvailibleFlag() const;
    //Returning as a constant reference, to avoid changes but to have effeciency benifits
    const Date& getRentalDate() const; 
    const Date& getReturnDate() const; 

    //Setters
    //No setter for the id since they are all unique
    //void setIdentificationNumber(int _identificationNumber); 
    //No set type because its constanst
    //void setType( std::string _type);
    void setIsAvailibleFlag(bool _isAvailibleFlag); // To make it abstract , do we only have to make one of these functions purely virtual? 
    void setRentalDate(const Date& _rentalDate); 
    void setReturnDate(const Date& _returnDate); 
    
    //Print, Made the Print function pure virtual therfore making the whole class abstract
    virtual void print() const = 0 ; 
    
}; 
