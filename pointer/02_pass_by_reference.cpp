# include <iostream>
using namespace std;


void changeA(int *p) {      // pass by reference using pointer.
    *p = 20;
}

void changeA_(int &b) {     // pass by reference using alice
    b = 30;                     // 'a' and 'b' are pointing to the same memory location.
}

int main() {

    int a = 10;

    cout << "Before change: " << a << endl;
    changeA(&a);
    cout << "After change: " << a << endl;

    changeA_(a);
    cout << "After change using reference using alice: " << a << endl;

    return 0;
}