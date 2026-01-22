# include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter the number of rows: ";
    cin >> n;

    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1

    for(int i = 1; i <= n; i++){
		for(int j = i; j > 0; j--){
			cout << j << " ";
		}
		cout << endl;
	}

    return 0;
}