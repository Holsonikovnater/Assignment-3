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

#include "Company.hpp"

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

    //Making a company
    Company* company1 = new Company();


     
    //Adding Cars to Company: 
    company1->addCarToCompany(*defaultStandardCar); 
    company1->addCarToCompany(*parameterStandardCar); 
    company1->addCarToCompany(*defaultLuxuryCar); 
    company1->addCarToCompany(*parameterLuxuryCar); 

    //Adding Customers to Company
    company1->addCustomerToCompany(*defaultRegular); 
    company1->addCustomerToCompany(*parameterRegular); 
    company1->addCustomerToCompany(*defaultCorporate); 
    company1->addCustomerToCompany(*parameterCorporate); 

    //Printing info about customers; 
    std::cout<<" \n\nInfo about customers before having rented cars:"<<std::endl; 
    defaultRegular->print(); 
    parameterRegular->print(); 
    defaultCorporate->print(); 
    parameterCorporate->print();
    

    

    //Adding Cars to customers
    /*
    defaultRegular->addCarToCustomer(*defaultStandardCar); 
    parameterRegular->addCarToCustomer(*parameterStandardCar); 
    defaultCorporate->addCarToCustomer(*defaultLuxuryCar); 
    parameterCorporate->addCarToCustomer(*parameterLuxuryCar);
    */
    company1->addCarToCustomer(*defaultRegular,*defaultStandardCar); 
    company1->addCarToCustomer(*parameterRegular,*parameterStandardCar); 
    company1->addCarToCustomer(*defaultCorporate,*defaultLuxuryCar); 
    company1->addCarToCustomer(*parameterCorporate,*parameterLuxuryCar); 


    //Printing info about customers; 
    std::cout<<"\n\nInfo about customers after having rented cars:"<<std::endl; 
    defaultRegular->print(); 
    parameterRegular->print(); 
    defaultCorporate->print(); 
    parameterCorporate->print(); 

    //Removing Cars From customers
    company1->removeCarFromCustomer(*defaultRegular,*defaultStandardCar); 
    company1->removeCarFromCustomer(*parameterRegular,*parameterStandardCar); 
    company1->removeCarFromCustomer(*defaultCorporate,*defaultLuxuryCar); 
    company1->removeCarFromCustomer(*parameterCorporate,*parameterLuxuryCar);
    

    //Printing info about customers; 
    std::cout<<"\n\nInfo about customers after having returned/removed cars:"<<std::endl; 
    defaultRegular->print(); 
    parameterRegular->print(); 
    defaultCorporate->print(); 
    parameterCorporate->print(); 

    //Note how the availability of the cars is now 1 that they have been removed/returned from a customer
    std::cout<<"\n\nInfo about company Customers and Cars"<<std::endl;
    company1->print();



     
    /*
    
    //Removing Cars From customers
    defaultRegular->removeCarToCustomer(*defaultStandardCar); 
    parameterRegular->removeCarToCustomer(*parameterStandardCar); 
    defaultCorporate->removeCarToCustomer(*defaultLuxuryCar); 
    parameterCorporate->removeCarToCustomer(*parameterLuxuryCar); 

    //Printing info about customers; 
    std::cout<<"Final info about customers:"<<std::endl; 
    defaultRegular->print(); 
    parameterRegular->print(); 
    defaultCorporate->print(); 
    parameterCorporate->print(); 

    //Printing info about cars after being removed
    defaultStandardCar->print(); 
    parameterStandardCar->print();
    defaultLuxuryCar->print(); 
    parameterLuxuryCar->print();
    */
    

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

    delete company1; 
    company1 = nullptr; 
    
    return 0; 
}