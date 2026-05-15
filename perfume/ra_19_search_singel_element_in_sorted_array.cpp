// single element is sorted array.

# include <iostream>
# include <vector>
# include <sstream>
using namespace std;


int findSingleElement(vector <int> arr, int n){
	
	int l = 1, r = n-2;                    // need to skip the 0th and n-1 th index 
	while(l <= r){
		
		int mid = l + (r-l)/2;
		
		if(n == 1) return arr[0];
		if(arr[n-1] != arr[n-2]) return arr[n-1];
		
		if(arr[mid-1] != arr[mid] && arr[mid+1] != arr[mid]) return arr[mid];
	
		if(arr[mid+1] != arr[mid]){
			l = mid+1;
		}
		else{
			r = mid-1;
		}
	}
	return -1;
}


int main(){

	vector <int> vec;
	string line;
	getline(cin, line);
	
	stringstream ss(line);
	string token;
	
	while(getline(ss, token, ',')){
		vec.push_back(stoi(token));
	}

	int n = vec.size();
	
	int result = findSingleElement(vec, n);
	
	if(result != -1){
		cout << result << endl;
	}
	
	return 0;
	
}
