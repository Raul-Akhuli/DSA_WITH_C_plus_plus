# include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter no of rows: ";
    cin  >> n;

    // *
    // * *
    // * * *
    // * * * *


    for(int i = 0; i < n; i++){
		for(int j = 0; j < i+1; j++){
			cout << "* ";
		}
		cout << endl;
	}


    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4


    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << i+1 << " ";
        }
        cout << endl;
    }




    // A
    // B B
    // C C C
    // D D D D


    for(int i = 0; i < n; i++){
		for(int j = 0; j <= i; j++){
			cout << char('A' + i) << " ";
		}
		cout << endl;
	}


    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4

    for(int i = 0; i < n; i++){
		for(int j = 1; j <= i+1; j++){
			cout << j << " "; 
		}
		cout << endl;
	}



    return 0;
}