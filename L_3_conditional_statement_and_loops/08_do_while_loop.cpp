# include <iostream>
using namespace std;

int main() {
    do {
        cout << "hello world" << endl;           
    } while(3 > 5);                          // easily run once without cheking the condition first
                                             // useful when you want to run the loop at least once
                                             // even if the condition is false


    return 0;
}
