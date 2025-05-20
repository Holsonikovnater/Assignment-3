/*
“We certify that this submission is the original work of members of the group and meets 
the Faculty's Expectations of Originality”
*/
// Holsonikov Dorisca
//Id:40316045
#include <iostream> 
#include "CorporateCustomer.hpp"

//Default
CorporateCustomer::CorporateCustomer():
Customer(){} 
//Parameter 
CorporateCustomer::CorporateCustomer(std::string _name, std::string _address, std::string _telephoneNumber):
Customer(_name, _address,_telephoneNumber){}
//Copy 
CorporateCustomer::CorporateCustomer(const Customer& otherCustomer):
Customer(otherCustomer){}

void CorporateCustomer::print()const
{
    std::cout<<"Customer Number: "<<customerNumber<<std::endl; 
    std::cout<<"Customer Name: "<<name<<std::endl;
    std::cout<<"Customer Address: "<<address<<std::endl;
    std::cout<<"Customer Telephone Number: "<<telephoneNumber<<std::endl;
    //Printing out the cars that a customer has rented
    std::cout<<"Customer Car List: "<<std::endl;
    for(int i = 0 ; i<customerCars.size();i++)
    {
        if(customerCars[i]!=nullptr)
        {
            customerCars[i]->print();
        }
    }
    


} 



CorporateCustomer::~CorporateCustomer(){}