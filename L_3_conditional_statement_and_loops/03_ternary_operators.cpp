# include <iostream>
using namespace std;

int main() {
    int num;
    cout << "enter a numeber: ";
    cin >> num;

    (num > 0) ? cout << "positive\n" : cout << "negative\n";      // if one condition has to face two outcomes

    cout << (num > 0 ? "positive\n" : "negative\n");        // we can write insde the cout also
}