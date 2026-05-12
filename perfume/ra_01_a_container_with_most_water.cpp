// container with most water

/*
	Input: 1 8 6 2 5 4 8 3 7
	Output: 49
*/


# include <iostream>
# include <vector>
using namespace std;

int main(){
	
	int n;
	cout << "enter vector size: ";
	cin >> n;

	vector <int> vec(n,1);
	for(int i = 0; i < n; i++){
		
		cin >> vec[i];
	}

	cout << endl;

	int l = 0, r = n-1;
	int ans = 0, maxi = 0;

	while(l < r){
		
		int ans	= (r-l) * min(vec[l], vec[r]);
		if(ans > maxi){
			
			maxi = ans;
		}
		else if(vec[l] > vec[r]){
			
			r--;
		}
		else{
			
			l++;
		}
	}
	cout << maxi << endl;
	return 0;
}