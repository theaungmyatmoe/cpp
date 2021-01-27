#include<iostream>
#include<string>
using namespace std;

int main(){
    string fname = "Aung ";
    string midname = "Myat ";
    string lname =  "Moe";
    string fullName = fname + midname;
    
    // append() is faster than `+`
    
    fullName.append(lname);
    std::cout << fullName << std::endl;
}