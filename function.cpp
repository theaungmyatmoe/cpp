#include <iostream>
#include<string>
using namespace std;
// declaration
void getName();
void getStudent(string name);

int main() {
    getName();
    getStudent("Noosi");
}

void getName() {
    cout << "Aung Myat Moe" << endl;
}

void getStudent(string name){
    cout << name << endl;
}