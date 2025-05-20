/*
“We certify that this submission is the original work of members of the group and meets 
the Faculty's Expectations of Originality”
*/
// Holsonikov Dorisca
//Id:40316045
#include "Customer.hpp"
#include <iostream> 
//Starting off our static Customer Number
int Customer::nextNumber = 1; 
//Default
Customer::Customer():
customerNumber(nextNumber++),
name(""), 
address(""), 
telephoneNumber("")
{
    for (int i=0; i<customerCars.size(); i++)
    {
        customerCars[i] = nullptr; 
    }
} 

//Parameter 
Customer::Customer(std::string _name, std::string _address, std::string _telephoneNumber):
customerNumber(nextNumber++),
name(_name), 
address(_address),
telephoneNumber(_telephoneNumber) 
{
    for (int i = 0 ; i<customerCars.size();i++)
    {
        customerCars[i] = nullptr; 
    }
}

//Copy 
Customer::Customer(const Customer& otherCustomer):
customerNumber(otherCustomer.customerNumber), 
name(otherCustomer.name),
address(otherCustomer.address), 
telephoneNumber(otherCustomer.telephoneNumber)
{
    for (int i = 0 ; i<customerCars.size(); i++)
    {
        customerCars[i] = otherCustomer.customerCars[i]; 
    }
}


//Getters
int Customer::getCustomerNumber() const{return customerNumber;}; 
std::string Customer::getCustomerName() const{return name;}; 
std::string Customer::getCustomerAddress() const{return address;}; 
std::string Customer::getCustomerTelephoneNumber() const{return telephoneNumber;}; 

//Setters
void Customer::setCustomerName(std::string _customerName){name = _customerName;}; 
void Customer::setCustomerAddress(std::string _customerAddress){address = _customerAddress;}; 
void Customer::setCustomerTelephoneNumber(std::string _customerTelephoneNumber){telephoneNumber = _customerTelephoneNumber;}; 


int Customer::searchForCarInCustomer(const Car& desiredCar)
{
    int index = 0; 
    for (int i = 0; i<customerCars.size(); i++)
    {
        
        if (customerCars[i]->getIdentificationNumber()==desiredCar.getIdentificationNumber())
        {
            //Only executes if we find a matching id
            return index; 
        }
        //incrementing the new index
        index++;
        
    }
    //Executes only if we dont find a match
    return -1; 
}
void Customer::addCarToCustomer( Car& desiredCar)
{
    for(int i = 0 ; i<customerCars.size(); i++)
    {
        if(customerCars[i] == nullptr)
        {
            //Making the index point to the new car object
            customerCars[i] = &desiredCar; 
            //Making the car unavailible
            desiredCar.setIsAvailibleFlag(false); 
            //exiting once we edit one element
            return; 
        }

    }
        
    
} 
void Customer::removeCarToCustomer( Car& desiredCar)
{
    
    if (searchForCarInCustomer(desiredCar) != -1)
    {
        //When we delete an car from the array we just make its index the null ptr
        customerCars[searchForCarInCustomer(desiredCar)] = nullptr; 
        //Making the car availible
        desiredCar.setIsAvailibleFlag(true); 
    }

} 



 Customer::~Customer()
{
    /*
    for( int i = 0; i<customerCars.size();i++)
    {
        //Deleting all our objects in our array which were made in dynamic memory
        delete customerCars[i]; 
        customerCars[i] = nullptr; 
    }

    */
    //Not deleting the objects being pointed to because i want them to be accesibe even if a customer gets deleted
} 
