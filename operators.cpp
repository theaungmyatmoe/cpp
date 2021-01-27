#include<iostream>

int main() {

    //  Arithmetic operators
    int a = 100; int b = 5;
    int sum = a  + b;
    int subtraction = a - b;
    int multiplication = a * b;
    int division = a/b;
    int modolus = a%b;

    std::cout << "Sum is => " << sum << std::endl;
    std::cout << "Subtraction is => " << subtraction << std::endl;
    std::cout << "Multiplication is => " << multiplication << std::endl;
    std::cout << "Division is => " << division << std::endl;
    std::cout << "Modolus is => " << modolus << std::endl;

    // Logical Operators

    bool equal = a == b;
    bool gthan = a > b;
    bool lthan = a < b;
    // >= , <=
    std::cout << "Equal Condition is => " << equal << std::endl;
    std::cout << "Greater Than Condition is => " << gthan << std::endl;
    std::cout << "Less Than Condition is => " << lthan << std::endl;

    // increments
    
    std::cout <<  a++ << std::endl;
    
    std::cout <<  a++ << std::endl;
    std::cout <<  --a << std::endl;
    
    // Decrements
    
    std::cout <<  --a << std::endl;
    
    std::cout <<  a-- << std::endl;
    std::cout <<  a-- << std::endl;

}