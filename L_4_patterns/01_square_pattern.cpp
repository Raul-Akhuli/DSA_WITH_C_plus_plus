# include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter the row: ";
    cin >> n;



    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4

    for(int i = 1; i <=n; i++){
        for(int j = 1; j <= n; j++){
            cout << j << " ";
        }
        cout << endl;
    }


    // A B C D
    // A B C D
    // A B C D
    // A B C D

    for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << char('A' + j) << " ";
		}
		cout << endl;
	}

    // different using another approach

    for(int i = 0; i < n; i++){
		char ch = 'A';
		for(int j = 0; j < n; j++){
			cout << ch << " ";
			ch = ch+1;
		}
		cout << endl;
	}

    // 1 2 3
    // 4 5 6
    // 7 8 9

    int num = 1;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << num ++ << " ";
		}
		cout << endl;
	}

    // A B C
    // D E F
    // G H I

    char ch = 'A';
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << ch << " ";
			ch++;
		}
		cout << endl;
	}

    return 0;
}