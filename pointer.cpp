#include<iostream>
#include<string>
using namespace std;

int main() {
    string food = "Pizza";
    std::cout << food << std::endl;
    std::cout << "Address of food is " << &food << std::endl;
    string* pointer = &food;
    std::cout << pointer << std::endl;
}