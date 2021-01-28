#include <iostream>
#include<string>
using namespace std;
// declaration
void getName();
void getStudent(string name);

void getCountry(string country = "Myanmar"){
    cout << "My country is " << country<<endl;
}

int main() {
    getName();
    getStudent("Noosi");
    getCountry();
    getCountry("Norway");
}

void getName() {
    cout << "Aung Myat Moe" << endl;
}

void getStudent(string name){
    cout << name << endl;
}

