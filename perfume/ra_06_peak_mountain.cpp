// peak index mountain

/*
    Input: 1 3 4 5 9 8 7 2
    Output: 9
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
	
	int l = 1, r = vec.size()-2;

	while(l <= r){
	
		int mid = l + (r-l)/2;
		
		if(vec[mid-1] < vec[mid] && vec[mid] > vec[mid+1]){
			
			cout << vec[mid] << endl;
			return 0;
		}
		
		if(vec[mid] < vec[mid +1]){
		
			l = mid+1;
		}
		else {
		
			r = mid-1;
		}
	}
	return 0;
}










