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
#include <array>

class Customer
{
    /*
    A customer is identified by a 
customer number (int), name (string), address (string), and a telephone number (string). A 
customer can rent many cars. The rental date and return date must be tracked. A car can be rented 
only if it is available.  
    */
      
    protected: 
    int customerNumber;
    int static nextNumber; 
    std::string name; 
    std::string address;
    std::string telephoneNumber; 
    //Assuming that a customer can only rent out 10 cars maxixmum 
    std::array <Car*,10> customerCars;

    public: 
    //Default
    Customer();
    //Parameter 
    Customer(std::string _name, std::string _address, std::string _telephoneNumber); 
    //Copy 
    Customer(const Customer& otherCustomer); 

    //Getters
    int getCustomerNumber() const; 
    std::string getCustomerName() const; 
    std::string getCustomerAddress() const; 
    std::string getCustomerTelephoneNumber() const; 

    //Setters
    void setCustomerName(std::string _customerName); 
    void setCustomerAddress(std::string _customerAddress); 
    void setCustomerTelephoneNumber(std::string _customerTelephoneNumber); 
    
    
    int searchForCarInCustomer(const Car& desiredCar);
    void addCarToCustomer( Car& desiredCar); 
    void removeCarToCustomer( Car& desiredCar); 

    //Making my customer class abstract.
    virtual void print()const = 0; 

    virtual ~Customer(); 
    



};