// book allocation

/*
    Input: 2,1,3,4
    Output: 6

    Input: 12,34,67,90
    Output: 113


    [2]      [1,3,4]=8
    [2,1]=3    [3,4]=7
    [2,1,3]=6  [4]            // answer is 6 because we have to minimize the maximum number of pages allocated to a student.

    [12]     [34,67,90]
    [12,34]  [67,90]
    [12,34,67]  [90]

*/


# include <iostream>
# include <vector>
# include <sstream>
using namespace std;




bool isValid(vector <int> &arr, int m, int n, int mid){
	
	int st = 1, pages = 0;
	
	for(int i = 0; i < n; i++){


		if(arr[i] > mid){
			return false;
		}
		if((pages + arr[i]) <= mid){
		
			pages += arr[i];
		}
		else{
			st++;
			pages = arr[i];
		}
		
	}	
	
	if(st > m){
		return false;
	}
	else{
		return true;
	}	
}




int main(){
	
	vector <int> vec;
	cout << "enter no of pages (comma separated): ";
	string line;
	getline(cin, line);
	stringstream ss(line);

	string token;
	int sum = 0, index = 0;
	while(getline(ss, token, ',')){
		vec.push_back(stoi(token));
		sum += vec[index];
		index++;
	}
	
	int m;
	cout << "enter no of student: ";
	cin >> m;
	
	int l = 0, r = sum, n = vec.size(), ans = 0;
	while(l <= r){
		
		int mid = l + (r-l)/2;
		
		if(isValid(vec, m, n, mid)){
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










