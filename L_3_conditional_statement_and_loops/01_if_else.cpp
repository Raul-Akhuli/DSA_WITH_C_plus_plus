# include <iostream>
using namespace std;

int main() {

    // // positive or negative

    cout << "for positive or negative check" << endl;
    int n;
    cout << "Enter an integer:";
    cin >> n;

    if(n > 0){
        cout << "n is positive\n";
    }else{
        cout << "n is negative\n";
    }


    // age check

    cout << "age verification" << endl;
    int age;
    cout << "Enter age: ";
    cin >> age;

    if(age >= 18){
        cout << "you are eligible to vote\n";
    }else{
        cout << "you are not eligible to vote\n";
    }


    // even or odd

    cout << "even or odd check" << endl;
    int num;
    cout <<"enter number ";
    cin >> num;
    if(num % 2 == 0){
        cout << "n is even\n";
    }else{
        cout << "n is odd\n";
    }







    return 0;
}