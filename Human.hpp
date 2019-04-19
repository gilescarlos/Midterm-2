//
//  Human.hpp
//  Midterm2Test
//
//  Created by Giles Pierre Carlos on 4/18/19.
//  Copyright © 2019 Giles Pierre Carlos. All rights reserved.
//

#ifndef Human_hpp
#define Human_hpp

#include <stdio.h>
#include <iostream>

class Human {
private:
    std::string name;
    int age;
    char sex;
    
    Human() {
        name = " ";
        age = 0;
        sex = ' ';
    }
protected:
    Human(std::string, int, char);
    
public:
    std::string getName();
    int getAge();
    char getSex();
    virtual ~Human() {}
    void setName(std::string);
    void setAge(int);
    void setSex(char);
};

#endif /* Human_hpp */
