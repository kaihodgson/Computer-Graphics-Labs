#include <iostream>

int main()
// Methods
void outputDetails();
<return type> <class name> :: <method name>()
{
    void Car::outputDetails()
    {
        std::cout << "\nMake: " << make
            << "\nModel: " << model
            << "\nYear: " << year << std::endl;
    }
    std::cout << "\nClasses\n-------" << std::endl;
    delorean.outputDetails();