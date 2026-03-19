# include <iostream>
using namespace std;

char numToChar(int n){
    return 'A' + n -1;
}



int main(){
    int n;
    cout << "enter number: " << endl;
    cin >> n;
    
    string result = "";
    result += numToChar(n);
    cout << result << endl;
    
    return 0;
}