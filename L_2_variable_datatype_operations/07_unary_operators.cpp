# include <iostream>
using namespace std;

int main() {

    // Increment operators

    cout << "Increment Operators:" << endl;
    int a = 10, c = 10;

    int b = a++; // Postfix increment: b = 10, a = 11
    cout << "After postfix increment:" << endl;

    cout << "a: " << a << " b: "<< b << endl;


    int d = ++c; // Prefix increment: d = 11, c = 11
    cout << "After prefix increment:" << endl;

    cout << "c: " << c << " d: "<< d << endl;


    // Decrement operators

    cout << "Decrement Operators:" << endl;

    int x = 20, z = 20;
    int y = x--; // Postfix decrement: y = 20, x = 19
    cout << "After postfix decrement:" << endl;
    cout << "x: " << x << " y: "<< y << endl;

    int w = --z; // Prefix decrement: w = 19, z = 19
    cout << "After prefix decrement:" << endl;
    cout << "z: " << z << " w: "<< w << endl;






    return 0;
}