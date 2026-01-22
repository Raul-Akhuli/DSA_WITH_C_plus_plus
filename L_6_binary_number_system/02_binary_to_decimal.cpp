# include <iostream>
# include <cmath>
using namespace std;


int BtoD(int n) {

    int number = 0;
    int p = 0;
    while(n > 0){
        int digit = n % 10;
        number += digit * pow(2, p);       // without pow -- p *= 2
        p++;
        n = n/10; 
    }

    return number;
}


int main() {
    int n;
    cout << "enter a binary number: ";
    cin >> n;

    cout << BtoD(n) << endl;
    return 0;
}