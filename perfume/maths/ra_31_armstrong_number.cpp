#include<iostream>
#include<cmath>
using namespace std;

int intPow(int num, int exp){
    int result = 1;
    for(int i = 0; i < exp; i++){
        result *= num;
    }
    return result;
}

int main(){
    int n;
    cout << "enter number: ";
    cin >> n;
    int sum = 0;
    int actual = n;
    int count = 0;

    if(n == 0){                    // when n = 0 below while loop does not run so instade of while you can use do-while for execute the loop at least once.
        count = 1;
    }
    else{
        count = (int)(log10(n) + 1);
    }
    while(n != 0){
        int digit = n%10;
        sum += intPow(digit, count);
        n /= 10;
    }

    if(actual == sum){
        cout << "entered number is armstrong. " << endl;
    }
    else{
        cout << "entered number is not armstrong. " << endl;
    }
}