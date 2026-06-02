// prime numbers

#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n <= 1) return false;
    
    for(int i = 2; i*i <= n; i++){
        if(n%i == 0) return false;
    }
    return true;
}


int main(){

    int n;
    cout << "enter number to check prime or not: ";
    cin >> n;

    if(isPrime(n)){
        cout << "entred number is prime." << endl;
    }
    else{
        cout << "entred number is not prime." << endl;
    }

    return 0;
}