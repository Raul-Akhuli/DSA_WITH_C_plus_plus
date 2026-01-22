# include <iostream>
using namespace std;

int fact(int n){
    int fact = 1;

    if (n <= 1) return 0;

    for(int i = 2; i <= n; i++){
        fact *= i;
    }
    
    return fact;
}


int calculate_nCr(int n, int r){
    int factN = fact(n);
    int factR = fact(r);
    int factNR = fact(n-r);

    return factN/(factR * factNR);
}


int main() {
    int n, r;
    cout << "enter the n value: ";
    cin >> n;
    cout << "enter the r value: ";
    cin >> r;

    cout << "nCr value is: " << calculate_nCr(n, r) << endl;

    return 0;
}