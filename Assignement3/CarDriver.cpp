/*
“We certify that this submission is the original work of members of the group and meets 
the Faculty's Expectations of Originality”
*/
// Holsonikov Dorisca
//Id:40316045
//Included the base class as well in order to make pointers of that type

#include "LuxuryCar.hpp"
#include "StandardCar.hpp"
#include "Car.hpp"
#include "Date.hpp"

int main()
{
    //Making a StandardCar
    Car* defaultStandardCar = new StandardCar();
    //Making parameter Standard Car 
    StandardCar* parameterStandardCar = new StandardCar(false,Date(01,1,2005),Date(01,15,2005)); 
    //Making a Standard Car using the copy constructor
    Car* copyStandardCar = new StandardCar(*parameterStandardCar); 

    //Testing the print function for each car
    defaultStandardCar->print(); 
    parameterStandardCar->print(); 
    copyStandardCar->print(); 

    //Making a StandardCar
    Car* defaultLuxuryCar = new LuxuryCar();
    //Making parameter Standard Car 
    LuxuryCar* parameterLuxuryCar = new LuxuryCar(false,Date(02,1,2005),Date(02,15,2005)); 
    //Making a Standard Car using the copy constructor
    Car* copyLuxuryCar = new LuxuryCar(*parameterLuxuryCar); 

    defaultLuxuryCar->print(); 
    parameterLuxuryCar->print(); 
    copyLuxuryCar->print(); 

    //Deleting my dynamic mem
    delete defaultStandardCar; 
    defaultStandardCar = nullptr; 

    delete parameterStandardCar; 
    parameterStandardCar = nullptr; 

    delete copyStandardCar; 
    copyStandardCar = nullptr; 

    delete defaultLuxuryCar; 
    defaultLuxuryCar = nullptr; 

    delete parameterLuxuryCar; 
    parameterLuxuryCar = nullptr;

    delete copyLuxuryCar; 
    copyLuxuryCar = nullptr; 

    




    return 0; 
}