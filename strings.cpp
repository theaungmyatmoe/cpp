#include<iostream>
#include<string>
using namespace std;
int main(){
    
    string name = "Aung Myat Moe";
    cout << name << std::endl;
    
    
    // string concatination
    
    string fname = "Aung ";
    string midname = "Myat ";
    string lname =  "Moe";
    string fullName = fname + midname;
    
    // append() is faster than `+`
    
    fullName.append(lname);
    std::cout << fullName << std::endl;
    
    // string length() or size()
    
    string alphas = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout<< "Length of alphas => " << alphas.length();
    
    
}