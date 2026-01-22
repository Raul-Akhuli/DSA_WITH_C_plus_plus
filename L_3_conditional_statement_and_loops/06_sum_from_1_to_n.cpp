# include <iostream>
using namespace std;

int main() {
    int n;
    cout << "up to which number: ";
    cin >> n;
    int sum = 0;

    // using for loop
    for(int i = 0; i <= n; i++) {
        sum += i;
    }
    cout << "sum is (using for loop):  " << sum << endl;

    // using while loop
    sum = 0;
    int i = 0;
    while(i <= n) {
        sum += i;
        i++;
    }

    cout << "sum is (using while loop): " << sum << endl;

    return 0;
}