#include <iostream>
#include <string>
#include "Observer.h"

//Creating Subject class
class Subject{
//variable
    Observer observers[3];
    int observerCount;






//Methods
    //loops through observer array to check if observer o already exists
    void attach(Observer o){
        
        for (int i = 0; i<observerCount; i++){
            if (observers[i] == o){
                
                std::cout << "Observer is already attached." << std::endl;

            return;
            }
        }
    
    //checking for space to add to array
    if (observerCount >= 3){
        std::cout << "No more room to add observers" << std::endl;
        
        return;
    }
    
    //Attaching observer to array
    observers[observerCount++] = o;
    
    }
  

 //notifying Observers with a for loop     
    void notifyAllObservers(){
    
        for (Observer o : observers){
            o.update();
    }
//display message that observers have been notified.        
        
        std::cout << "Observers Notified" << std::endl;
    }


};


