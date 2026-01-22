# include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter a number: ";
    cin >> n;

    if(n <= 1) {
        cout << "Entered number is not prime." << endl;
    } else {
        bool isPrime = true;
        for(int i = 2; i*i <= n; i++) {  // check up to sqrt(n),if it is prime you got a factor. 
            if(n%i == 0) {
                isPrime = false;
                break;
            }
        }
        if(isPrime) {
            cout << "Entered number is prime." << endl;
        }else {
            cout << "Entered number is not prime." << endl;
        }
    }

    return 0;
}