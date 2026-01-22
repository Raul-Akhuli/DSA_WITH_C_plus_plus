# include <iostream>
using namespace std;

int main() {
    // Arithmetic operators

    cout << "Arithmetic operators" << endl;
    int a = 10, b = 6;            // you can initialize multiple variable (same type) saperating using comma.

    cout << "sum = " << (a+b) << endl;
    cout << "difference = " << (a-b) << endl;
    cout << "product = " << (a*b) << endl;
    cout << "division = " << (a/(float)b) << endl;         // type casting to get precise result.
    cout << "remainder = " << (a%b) << endl;


    // Relational operators

    cout << "Relational operators" << endl;

    cout << (10 > 5) << endl;
    cout << (10 < 5) << endl;
    cout << (10 >= 5) << endl;
    cout << (10 <= 5) << endl;
    cout << (10 == 5) << endl;
    cout << (10 == 10) << endl;
    cout << (10 != 5) << endl;


    // Logical operators

    cout << "Logical operators" << endl;

    cout << !(3 > 2) << endl;
    cout << ((3 > 2) && (2 > 1)) << endl;
    cout << ((3 > 2) && (2 < 1)) << endl;
    cout << ((3 > 2) || (2 < 1)) << endl;
    cout << ((3 > 2) || (2 > 1)) << endl;


    return 0;
}