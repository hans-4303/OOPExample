#include "OOPExample.h"

#include <iostream>

Person::Person(const std::string& name, int age) : name_(name), age_(age) {}

void Person::PrintInfo() const {
    std::cout << "Name: " << name_ << ", Age: " << age_ << std::endl;
}