# include <iostream>
using namespace std;

int calculateSum(int n){
	int sum = 0;
	for(int i = 1; i <=n; i++){
		sum += i;
	}
	return sum;
}

int main() {
    int n;
	cout << "enter no of element up to do sum: ";
	cin >> n;

	cout << "sum is: " << calculateSum(n) << endl;
    return 0;
}