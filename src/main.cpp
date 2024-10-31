#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;


int main() {
    
    cout << "Hello" << endl;
    cout << "World" << endl;

    cout << "H";
    cout << "e";
    cout << "l";
    cout << "l";
    cout << "o" << endl;

    cout << "W";
    cout << "o";
    cout << "r";
    cout << "l";
    cout << "d" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Hello"[i];
    }
    cout << endl;

    cout << "W";
    cout << "o";
    cout << "r";
    cout << "l";
    cout << "d" << endl;

    system ("pause");
    return 0;
}
    