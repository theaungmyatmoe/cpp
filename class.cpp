#include <iostream>
#include <string>
using namespace std;

class Car 
{
public:
    string name;
    int weight;
    
void getName(string name){
    std::cout << "My name is " << name << std::endl;

}

};


int main(){
    Car car1;
    car1.name = "Toyota";
    car1.weight = 20;
    std::cout << car1.name << "\n" << car1.weight << std::endl;
    
    car1.getName("Volvo");

}