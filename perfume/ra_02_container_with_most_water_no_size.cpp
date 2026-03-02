// container with most water

# include <iostream>
# include <vector>
# include <sstream>
using namespace std;

int main(){
	
	// Read input line by line until EOF
	vector<int> vec;
	int num;
	while(cin >> num){
		vec.push_back(num);
	}
	int n = vec.size();

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