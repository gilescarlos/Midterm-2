//
//  Human.cpp
//  Midterm2Test
//
//  Created by Giles Pierre Carlos on 4/18/19.
//  Copyright © 2019 Giles Pierre Carlos. All rights reserved.
//

#include "Human.hpp"
#include <iostream>

Human::Human(std::string n, int a, char s) {
    setName(n);
    setAge(a);
    setSex(s);
}

std::string Human::getName() { return name; }
int Human::getAge() { return age; }
char Human::getSex() { return sex;}

void Human::setName(std::string n) { name = n; }
void Human::setAge(int a) { age = a; }
void Human::setSex(char s) { sex = s; }
