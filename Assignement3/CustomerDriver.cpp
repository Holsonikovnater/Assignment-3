/*
“We certify that this submission is the original work of members of the group and meets 
the Faculty's Expectations of Originality”
*/
// Holsonikov Dorisca
//Id:40316045
#include "LuxuryCar.hpp"
#include "StandardCar.hpp"
#include "Car.hpp"
#include "Date.hpp"

#include "Customer.hpp"
#include "RegularCustomer.hpp"
#include "CorporateCustomer.hpp"

int main()
{
    //Making a StandardCar
    Car* defaultStandardCar = new StandardCar();
    //Making parameter Standard Car 
    Car* parameterStandardCar = new StandardCar(true,Date(01,1,2005),Date(01,15,2005)); 
    
    /*
    //Testing the print function for each car
    defaultStandardCar->print(); 
    parameterStandardCar->print();
    */
     
    
    //Making a StandardCar
    Car* defaultLuxuryCar = new LuxuryCar();
    //Making parameter Standard Car 
    Car* parameterLuxuryCar = new LuxuryCar(true,Date(02,1,2005),Date(02,15,2005)); 
    
    /*
    defaultLuxuryCar->print(); 
    parameterLuxuryCar->print();
    */

    //Making Regular Customers
    Customer* defaultRegular = new RegularCustomer();  
    Customer* parameterRegular = new RegularCustomer("parameterReg","123","1-2-3");
    
    //Making Corporate Customers
    Customer* defaultCorporate = new CorporateCustomer(); 
    Customer* parameterCorporate = new CorporateCustomer("parameterCorp","456","4-5-6"); 

    /*
    //Printing info about customers; 
    std::cout<<"Initial info about customers:"<<std::endl; 
    defaultRegular->print(); 
    parameterRegular->print(); 
    defaultCorporate->print(); 
    parameterCorporate->print();
    */
     

    //Adding Cars to customers
    defaultRegular->addCarToCustomer(*defaultStandardCar); 
    parameterRegular->addCarToCustomer(*parameterStandardCar); 
    defaultCorporate->addCarToCustomer(*defaultLuxuryCar); 
    parameterCorporate->addCarToCustomer(*parameterLuxuryCar); 

    //Printing info about customers; 
    std::cout<<" Intermediate info about customers:"<<std::endl; 
    defaultRegular->print(); 
    parameterRegular->print(); 
    defaultCorporate->print(); 
    parameterCorporate->print(); 

    //Removing Cars From customers
    defaultRegular->removeCarToCustomer(*defaultStandardCar); 
    parameterRegular->removeCarToCustomer(*parameterStandardCar); 
    defaultCorporate->removeCarToCustomer(*defaultLuxuryCar); 
    parameterCorporate->removeCarToCustomer(*parameterLuxuryCar); 

    //Printing info about cars after being removed 
    std::cout<<"Final info about customers:"<<std::endl; 
    defaultRegular->print(); 
    parameterRegular->print(); 
    defaultCorporate->print(); 
    parameterCorporate->print(); 

    
    


    

    
    
    
    

    //Deleting my dynamic mem
    delete defaultStandardCar; 
    defaultStandardCar = nullptr; 

    delete parameterStandardCar; 
    parameterStandardCar = nullptr; 

    delete defaultLuxuryCar; 
    defaultLuxuryCar = nullptr; 

    delete parameterLuxuryCar; 
    parameterLuxuryCar = nullptr;

    delete defaultRegular; 
    defaultRegular = nullptr;

    delete parameterRegular; 
    parameterCorporate = nullptr;

    delete defaultCorporate; 
    defaultCorporate = nullptr; 

    delete parameterCorporate;
    parameterCorporate = nullptr; 

    
    return 0; 
}