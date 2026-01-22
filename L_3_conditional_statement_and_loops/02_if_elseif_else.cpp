# include <iostream>
using namespace std;

int main() {
    // Grading system

    int marks;
    cout << "enter the score (0-100): ";
    cin >> marks;
    if(marks >= 90){
        cout << "A\n";
    } else if(marks < 90 && marks >=80){
        cout << "B\n";
    } else {
        cout << "C\n";
    }


    // character is uppercase or lowercase
    char ch;
    cout << "entear a character ";
    cin >> ch;
    if(ch >= 'A' && ch <= 'Z'){
        cout << "uppercase\n";
    } else if(ch >= 'a' && ch <= 'z'){
        cout << "lowercase\n";
    } else {
        cout << "not a valid character\n";
    }


    // character is uppercase or lowercase using ASCII values
    char ch1;
    cout << "enter a character ";
    cin  >> ch1;
    if(ch1 >= 65 && ch1 <= 90) {                    // no need typecast into int 
        cout << "uppercase\n";                      // compiler do implicit typeconversion automatically
    } else if(ch1 >= 97 && ch1 <= 122) {
        cout << "lowercase\n";
    } else {
        cout << "not a valid character\n";
    }


    return 0;
}