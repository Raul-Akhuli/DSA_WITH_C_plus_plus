// sieve of eratosthenes.
/*
    first asume all the element within that range is prime
    then eliminate all the multiples
    start with 2
    remove all multiple of 2
    go to 3
    remove all multiple of 3 and so on....
*/

// count prime within range.

#include<iostream>
#include<vector>
using namespace std;

int isPrime(int n){
    vector<bool> isprime(n+1, true);
    int count = 0;
    for(int i = 2; i <= n; i++){
        if(isprime[i]){
            for(int j = i*2; j <= n; j = j+i){       // j+i increment based on 'i' value.  i = 2, j = 4 || j = 6(j+i) || j = 8(j+i).
                isprime[j] = false;
            }
            count++;
        }
    }
    return count;
}


int main(){
    int n;
    cout << "enter upper range value: ";
    cin >> n;


    cout << "no of prime number: " << isPrime(n) << endl;

    return 0;
}