// painter partition problem.

# include <iostream>
# include <vector>
# include <sstream>
# include <climits>                // want to use max, min --> need to import <algorithm> header file.
using namespace std;



bool isValid(vector <int> &arr, int n, int m, int mid){
	
	int st = 1, times = 0;
	
	for(int i = 0; i < n; i++){
		
		if((arr[i] + times) <= mid){
		
			times += arr[i];
		}
		else{
		
			st++;
			times = arr[i];
		}
	}
	
	if(st > m){
	
		return false;
	}
	else return true;

}



int main(){

	vector <int> vec;
	string line;
	cout << "enter times: " << endl;
	getline(cin, line);

	stringstream ss(line);
	string token;
	
	int sum = 0, index = 0, maxi = INT_MIN;
	while(getline(ss, token, ',')){
	
		vec.push_back(stoi(token));
		sum += vec[index];
		if(vec[index] > maxi){
		
			maxi = vec[index];
		}
		index++;
	}
	
	int m;
	cout << "enter no of painter: ";
	cin >> m;
	
	
	int l = maxi, r =sum, ans = 0;
	int n = vec.size();
	while(l <= r){
	
		int mid = l + (r-l)/2;
		
		if(isValid(vec, n, m, mid)){
			
			ans = mid;
			r = mid-1;
		}
		else{
		
			l = mid+1;
		}
	}
		
	
	cout << ans << endl;
	
	return 0;
}

