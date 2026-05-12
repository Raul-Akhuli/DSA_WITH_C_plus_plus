// aggressive cows
/*
	I/p: 1,2,4,8,9
	 3
	O/p: 3

*/


// Aggressive cows

# include <iostream>
# include <sstream>
# include <vector>
# include <algorithm>
using namespace std;

bool canWePlace(vector <int> &stall, int n, int cow, int dist){

	int nCow = 1, limit = stall[0];
	
	for(int i = 1; i < n; i++){
	
		if(stall[i] - limit >= dist){
		
			nCow++;
			limit = stall[i];
			
			if(nCow >= cow) return true;
		}
	}
	return false;
}


int goToBinary(vector <int> &stall, int cow){
	
	int n = stall.size();

	if(cow > n){
		return -1;
	}
	
	int l = 1, r = stall[n-1] - stall[0];
		
	while(l <= r){
	
		int mid = l + (r-l)/2;
		if(canWePlace(stall, n, cow, mid)){       // n log D
			l = mid+1;
		}

		else{
		
			r = mid-1;
		}
	}
	return r;
}


int main(){

	vector <int> vec;
	string line;
	cout << "enter elements: " << endl;
	getline(cin, line);

	stringstream ss(line);
	string token;
	
	while(getline(ss, token, ',')){
	
		vec.push_back(stoi(token));
	}
	
	if(vec.empty()){
	
		cout << "no stall provided" << endl;
		return 0;
	}
	
	
	int cow;
	cout << "enter no of cow: ";
	cin >> cow;

	if(cow <= 1){
	
		cout << "invalid no of cow." << endl;
		return 0;
	}
	
	sort(vec.begin(), vec.end());             // n log n
	cout << goToBinary(vec, cow) << endl;
	
	return 0;
}