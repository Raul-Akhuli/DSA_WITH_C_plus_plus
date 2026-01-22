# include <iostream>
using namespace std;

int fact (int n) {
	if(n <= 1) return 1;

	int fact = 1;
	for(int i = 2; i <= n; i++){
		fact *= i;
	}
	return fact;
}

int main () {
	int n;
	cout << "enter no of element up to do flactorial: ";
	cin >> n;

	cout << "factorial is: " << fact(n) << endl;
	
	return 0;
}
