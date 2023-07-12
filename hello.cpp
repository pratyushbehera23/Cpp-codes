// 

#include<iostream>
using namespace std;

int main() {

    // Declare/Define variables
    int a = 123;
    float f = 1.2;
    char c = 'P';
    bool b = true;

    // Print using cout
    cout << a << endl;
    cout << f << endl;
    cout << c << endl;
    cout << b << endl;

    // Data type size
    int size = sizeof(a);
    cout << "Size of a is :" << size << endl;
}
