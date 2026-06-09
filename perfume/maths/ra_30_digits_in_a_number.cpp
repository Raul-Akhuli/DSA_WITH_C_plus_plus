#include<iostream>
#include<cmath>
using namespace std;

void countDigits(int n){
    cout << (int)(log10(n) + 1) << endl;   
}



int main(){

    int n;
    cout << "enter number: ";
    cin >> n;

    

    countDigits(n);

    int reverse = 0;
    
    while(n != 0){
        int digit = n % 10;
        reverse = reverse * 10 + digit;

        n = n/10;
    }

    while(reverse != 0){
        int digit = reverse % 10;
        cout << digit << " ";

        reverse = reverse/10;
    }

    return 0;
}