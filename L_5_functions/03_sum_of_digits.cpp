# include <iostream>
using namespace std;

void calculateDigitSum(int n){
    int sum = 0;
    while(n > 0){
        int digit = n % 10;
        sum += digit;
        n = n/10;
    }
    cout << "sum is: "<< sum << endl;
}


int main() {
    int n;
    cout << "enter a number to calculate the digit sum: ";
    cin >> n;

    calculateDigitSum(n);
    return 0;
}