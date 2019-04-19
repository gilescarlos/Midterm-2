//
//  ChildParent.hpp
//  Midterm2Test
//
//  Created by Giles Pierre Carlos on 4/18/19.
//  Copyright © 2019 Giles Pierre Carlos. All rights reserved.
//

#ifndef ChildParent_hpp
#define ChildParent_hpp

#include "Human.hpp"
#include <stdio.h>
#include <vector>
#include <iostream>

class Child;
class Parent;

class Child : public Human {
private:
    std::string momName, dadName;
    int allowance;
    
    Child() : Human(" ", 0, ' ')
    {
        momName = " ";
        dadName = " ";
        allowance = 0;
    }
public:
    Child(std::string name, int age, char sex, std::string mName, std::string dName) : Human(name, age, sex) {
        momName = mName;
        dadName = dName;
    };
    ~Child() {}
    
    int getAllowance() const { return allowance; }
    
    void printParent() {
        std::cout << "Mom: " << momName << std::endl;
        std::cout << "Dad: " << dadName << std::endl;
    }
    
    friend class Parent;
};

class Parent : public Human {
private:
    std::vector<Child> children;
    Parent() : Human(" ", 0, ' ') {};
public:
    Parent(std::string name, int age, char sex) : Human(name, age, sex) {}
    ~Parent() {}
    void printChild() {
        for (int i = 0; i < children.size(); i++) {
            std::cout << children[i].getName() << " ";
        }
    }
    void setChild(Child ch) { children.push_back(ch); }
    void setChildAllowance(int allowance, Child &child) {
        child.allowance = allowance;
    }
    
};

#endif /* ChildParent_hpp */
