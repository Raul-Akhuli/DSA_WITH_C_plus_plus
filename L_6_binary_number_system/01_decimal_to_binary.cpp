# include <iostream>
# include <cmath>
using namespace std;

int decimalTobinary(int n){
    
    double number = 0;
    int p = 0;
    
    while(n > 0){
        int digit = n % 2;
        number += digit * pow(10, p);          // you can multiply with p = 1 and change p *= 10;
        p++;
        n = n/2;
    }

    return number;
}

int main() {
    int n;
    cout << "enter a upto decimal number: ";
    cin >> n;

    for(int i = 0; i <= n; i++){

        cout << decimalTobinary(i) << endl;
    }

    return 0;
}