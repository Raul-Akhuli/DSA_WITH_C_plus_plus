// aggressive cows

# include <iostream>
# include <vector>
# include <sstream>
# include <algorithm>
using namespace std;



bool canWePlace(vector <int>& vec, int n, int cow, int dist){
	
	int nCow = 1, limit = vec[0];
	
	for(int i = 1; i < n; i++){
	
		if(vec[i] - limit >= dist){
		
			nCow++;
			limit = vec[i];
			
			if(nCow >= cow) return true;                // optimization.
		}
	}
	return false;

}






int goToBinary(vector <int>& vec, int cow){

	int n = vec.size();

	if(cow > n){
		return -1;
	}

	int l = 1, r = vec[n-1] - vec[0];
	
	while(l <= r){
		
		int mid = l + (r-l)/2;                            // O(n log d). 
		if(canWePlace(vec, n, cow, mid)){                 
		                                               
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
	
		cout << "no stall provided." << endl;
		return 0;
	}

	int cow;
	cout << "enter no of cows: ";
	cin >> cow;

	if(cow <= 1){                                  
	
		cout << "For calculation of distance min 2 cows required." << endl;
		return 0;
	}
	
	sort(vec.begin(), vec.end());                // O(n log n).
	
	cout << goToBinary(vec, cow) << endl;

	return 0;
}