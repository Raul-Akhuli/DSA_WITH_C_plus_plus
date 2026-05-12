// container with most water

/*
	Input: 1 8 6 2 5 4 8 3 7
	Output: 49
*/

# include <iostream>
# include <vector>
# include <sstream>
using namespace std;

int main(){
	
	vector <int> vec;
	string line;
	getline(cin, line);
	stringstream ss(line);
	int x;
	while(ss >> x){
		vec.push_back(x);
	}

	int l = 0, r = vec.size()-1;
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