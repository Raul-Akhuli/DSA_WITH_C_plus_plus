# include <iostream>
using namespace std;

int main() {
    int n;
    cout << "up to which number: ";
    cin >> n;
    int oddsum = 0;
    for(int i = 1; i <= n; i ++) {         // you can use i+=2 as well 
        if(i%2 != 0){                      // i%2 == 0 for even numbers
            oddsum += i;
        }
    }

    cout << "sum of odd numbers: " << oddsum << endl;
    return 0;
}