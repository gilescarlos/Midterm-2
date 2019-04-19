
#include<iostream>
#include "ChildParent.hpp"
void printInfo(Human person) {
    std::cout << "Name: " << person.getName() << std::endl;
    std::cout << "Age: " << person.getAge() << std::endl;
    std::cout << "Sex: " << person.getSex() << std::endl;
}

int main(void)
{
    Parent Homer("Homer", 36, 'M');
    Parent March("March", 34, 'F');
    Child Lisa("Lisa", 12, 'F', "March", "Homer");
    Child Bart("Bart", 10, 'M', "March", "Homer");
    Child Maggie("Maggie", 3, 'F', "March", "Homer");
    
    Homer.setChild(Lisa);
    Homer.setChild(Bart);
    Homer.setChild(Maggie);
    
    March.setChild(Lisa);
    March.setChild(Bart);
    March.setChild(Maggie);
    
    std::cout << "Bart's allowance: " << Bart.getAllowance() << std::endl;
    
    Homer.setChildAllowance(5, Bart);
    
    std::cout << "Bart's allowance: " << Bart.getAllowance() << std::endl;

    Bart.printParent();
    
    printInfo(March);
    printInfo(Lisa);
    
    return 0;
}


