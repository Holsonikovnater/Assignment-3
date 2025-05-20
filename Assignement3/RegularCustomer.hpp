#pragma once
/*
“We certify that this submission is the original work of members of the group and meets 
the Faculty's Expectations of Originality”
*/
// Holsonikov Dorisca
//Id:40316045
#include "Customer.hpp"
#include <iostream> 

class RegularCustomer:public Customer 
{
    private: 

    public: 
    //Default
    RegularCustomer(); 
   //Parameter 
    RegularCustomer(std::string _name, std::string _address, std::string _telephoneNumber); 
   //Copy 
    RegularCustomer(const Customer& otherCustomer);

   void print()const; 


   ~RegularCustomer(); 

}; 