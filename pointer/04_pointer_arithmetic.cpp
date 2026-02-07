

# include <iostream>
using namespace std;

int main() {

    int a = 10;
    int *p = &a;

    cout << p << endl;
    p++;
    cout << p << endl;

    int *ptr = &a;
    int *ptr2 = ptr;

    cout << (ptr == ptr2) << endl;


    return 0;
}