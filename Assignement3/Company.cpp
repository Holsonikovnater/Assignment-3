/*
“We certify that this submission is the original work of members of the group and meets 
the Faculty's Expectations of Originality”
*/
// Holsonikov Dorisca
//Id:40316045
#include "Company.hpp"
#include <iostream> 

//Default
Company::Company()
{
    for (int i=0; i<companyCars.size(); i++)
    {
        companyCars[i] = nullptr; 
    }

   for ( int i = 0; i<companyCustomers.size(); i++)
   {
    companyCustomers[i] = nullptr; 
   }
} 

//Copy 
Company::Company(const Company& otherCompany)
{
    for (int i = 0 ; i<companyCars.size(); i++)
    {
        companyCars[i] = otherCompany.companyCars[i]; 
    }

    for ( int i = 0; i<companyCustomers.size(); i++)
   {
    companyCustomers[i] = nullptr; 
   }
}

int Company::searchForCarInCompany(const Car& desiredCar)
{
    int index = 0; 
    for (int i = 0; i<companyCars.size(); i++)
    {
        
        if (companyCars[i]->getIdentificationNumber()==desiredCar.getIdentificationNumber())
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
void Company::addCarToCompany( Car& desiredCar)
{
    for(int i = 0 ; i<companyCars.size(); i++)
    {
        if(companyCars[i] == nullptr)
        {
            //Making the index point to the new car object
            companyCars[i] = &desiredCar; 
            //Making the car unavailible
            desiredCar.setIsAvailibleFlag(false); 
            //exiting once we edit one element
            return; 
        }

    }
        
    
} 
void Company::removeCarFromCompany( Car& desiredCar)
{
    
    if (searchForCarInCompany(desiredCar) != -1)
    {
        //When we delete an car from the array we just make its index the null ptr
        companyCars[searchForCarInCompany(desiredCar)] = nullptr; 
        //Making the car availible
        desiredCar.setIsAvailibleFlag(true); 
    }

}

int Company::searchForCustomerInCompany(const Customer& desiredCustomer)
{
    int index = 0; 
    for (int i = 0; i<companyCustomers.size(); i++)
    {
        
        if (companyCustomers[i]->getCustomerNumber()==desiredCustomer.getCustomerNumber())
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
void Company::addCustomerToCompany(Customer& desiredCustomer)
{
    for(int i = 0 ; i<companyCustomers.size(); i++)
    {
        if(companyCustomers[i] == nullptr)
        {
            //Making the index point to the new customer object
            companyCustomers[i] = &desiredCustomer;  
            //exiting once we edit one element
            return; 
        }

    }
}
void Company::removeCustomerFromCompany(Customer& desiredCustomer)
{
    if (searchForCustomerInCompany(desiredCustomer) != -1)
    {
        //When we delete an customer from the array we just make its index the null ptr
        companyCustomers[searchForCustomerInCompany(desiredCustomer)] = nullptr; 
         
    }
}
//Fucntions to do with handleling cars and customers
void Company::addCarToCustomer(Customer& desiredCustomer,Car& desiredCar)
{
    if (searchForCarInCompany(desiredCar) != -1)
    {
        if(searchForCustomerInCompany(desiredCustomer) != -1)
        {
            //Adding the car to the customers car list
            companyCustomers[searchForCustomerInCompany(desiredCustomer)]->addCarToCustomer(*companyCars[searchForCarInCompany(desiredCar)]); 
        }
    }
} 
void Company::removeCarFromCustomer(Customer& desiredCustomer,Car& desiredCar)
{
    if (searchForCarInCompany(desiredCar) != -1)
    {
        if(searchForCustomerInCompany(desiredCustomer) != -1)
        {
            //Adding the car to the customers car list
            companyCustomers[searchForCustomerInCompany(desiredCustomer)]->removeCarToCustomer(*companyCars[searchForCarInCompany(desiredCar)]);
            
        }
    }
}

void Company::print() const
{
   
    std::cout<<"Company Car List: "<<std::endl;
    for(int i = 0 ; i<companyCars.size();i++)
    {
        if(companyCars[i] != nullptr)
        {
            companyCars[i]->print();
        }
    }
    std::cout<<"Company Customer List: "<<std::endl;
    for(int i = 0 ; i<companyCars.size();i++)
    {
        if(companyCustomers[i] != nullptr)
        {
            companyCustomers[i]->print();
        }
    }


}
Company::~Company(){}