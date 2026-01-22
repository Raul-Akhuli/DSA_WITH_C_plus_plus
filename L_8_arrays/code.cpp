# include <iostream>
using namespace std;

int main() {
    int size = 5;
    int marks[size];

    cout << "enter the elements" << endl;

    for(int i = 0; i < size; i++){

        cin >> marks[i];
    }

    // int length = sizeof(marks) / sizeof(marks[0]);      // to find out the length


    cout << "elements: " << endl;
    for(int i = 0; i < size; i++){

        cout << marks[i] << endl;
    }


    return 0;
}