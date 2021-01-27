#include<iostream>
using namespace std;
int main() {
    // while loop
    int i = 0;
    while (i < 5) {
        cout << i << "\n";
        i++;
    }
    // do while
    do {
        cout << i << "\n";
        i++;
    }while (i < 5);

    // for loop
    for (int i = 0; i < 5; i++) {
        cout << i << "\n";
    }

    //break keyword
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            break;
        }
        cout << i << "\n";
    }

    //continue keyword
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            continue;
        }
        cout << i << "\n";
    }
}