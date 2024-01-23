#pragma once
#include <string>

class Person {
public:
    Person(const std::string& name, int age);
    void PrintInfo() const;
private:
    std::string name_;
    int age_;
};