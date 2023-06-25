#include <iostream>
#include <string>
#include "Observer.h"

//Creating employee class
class employee : public Observer{

//Variables
    std::string role;



//Methods

//constructor
    employee(std::string name, std::string role){
        this->name = name;
        this->role = role;
    }



    void update (std::string state, std::string from) override {





//displaying the employee;s name and role as well as what machine is in what state.
        std::cout << "Employee name: " << name << "employee role: " << role 
            << "Machine state: " << state << "From machine: " << from << std::endl;

}




};