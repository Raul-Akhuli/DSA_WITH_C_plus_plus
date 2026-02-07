# include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    cout << arr << endl;   // it print address of arr[0] element.
    cout << *arr << endl;  // it print value of arr[0].

                // so arr is a constant pointer variable which point to the first element of array.
                // we can not change the address of arr but we can change the value of arr[0].
    return 0;
}