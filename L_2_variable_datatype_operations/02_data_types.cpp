#include <iostream>
using namespace std;

int main() {

    int age = 20;          // 4 bytes

    char grade = 'A';
    // char name = 'raul';    // it gives and error because char can store only single character  // 1 byte

    float PI = 3.14f;      // if you not write f then it will be treated as double    // 4 bytes

    bool isAdult = true;   // during output is shows 0 or 1   // 1 byte

    double price = 100.99;  // 8 bytes





    cout << age << endl;
    cout << grade << endl;
    cout << PI << endl;
    cout << isAdult << endl;
    cout << price << endl;
    return 0;
}
