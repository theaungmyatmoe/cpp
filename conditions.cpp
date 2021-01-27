#include<iostream>
using namespace std;

int main(){
    int x = 10;
    int y = 5;
    if(x>y){
        std::cout << "x is greter than y " << std::endl;
    }else if(x==y){
        std::cout << "x and y is equal " << std::endl;
    }else{
        std::cout << "I d'ont know" << std::endl;
    }
}