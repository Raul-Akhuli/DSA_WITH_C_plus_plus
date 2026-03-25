// pow(^n)

# include <iostream>
using namespace std;

int main(){

	double x;
	cout << "enter number: ";
	cin >> x;

	long long n;
	cout << "enter power value: ";
	cin >> n;
	
	if(x == 0 && n < 0){
	
		cout << "undefined" << endl;
		return 0;
	}
		
	if(n < 0){
	
		x = 1/x;
		n = n*-1;
	}
	
	double ans = 1; 
	
	if (n == 0){
		cout << ans << endl;
		return 0;
	}
	
	while(n > 0){
	
		int digit = n%2;
		if(digit == 1){
		
			ans = ans*x;
		}
		x *= x;
		n /= 2;
	}


	cout << "result " << ans << endl;
		
	
	return 0;
}


