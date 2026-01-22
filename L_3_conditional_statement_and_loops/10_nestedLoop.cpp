// nested loop

//	* * * * *
//	* * * * *
//	* * * * *
//	* * * * *
//	* * * * *

# include <iostream>
using namespace std;

int main () {
	int n = 5;                           // you can change it as user input
	for(int i = 1; i <= n; i++){
		int m = 5;                   // you can change it as user input
		for(int j = 1; j <= m; j++) {
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}