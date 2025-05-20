#pragma once 
/*
“We certify that this submission is the original work of members of the group and meets 
the Faculty's Expectations of Originality”
*/
// Holsonikov Dorisca
//Id:40316045
#include <iostream> 
#include <string>
#include <array> 

#include "LuxuryCar.hpp"
#include "StandardCar.hpp"
#include "Car.hpp"
#include "Date.hpp"

#include "Customer.hpp"
#include "RegularCustomer.hpp"
#include "CorporateCustomer.hpp"


class Company
{
    private: 
    std::array <Car*,1000> companyCars; 
    std::array <Customer*,100> companyCustomers;

    public: 
    //Default
    Company(); 
    //Since a Company has no parameters other than the array, it will have no paramater constructor
    //Copy Constructor
    Company(const Company& otherCompany); 

    //Functions to do with cars
    int searchForCarInCompany(const Car& desiredCar);
    void addCarToCompany(Car& desiredCar); 
    void removeCarFromCompany(Car& desiredCar); 

    //Functions to do with customers
    int searchForCustomerInCompany(const Customer& desiredCustomer);
    void addCustomerToCompany(Customer& desiredCustomer); 
    void removeCustomerFromCompany(Customer& desiredCustomer);

    //Fucntions to do with handleling cars and customers
    void addCarToCustomer(Customer& desiredCustomer,Car& desiredCar); 
    void removeCarFromCustomer(Customer& desiredCustomer,Car& desiredCar);
    

    void print() const; 

    ~Company(); 





};
