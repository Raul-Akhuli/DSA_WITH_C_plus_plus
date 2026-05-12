// search in rotated sorted array.

# include <iostream>
# include <vector>
# include <sstream>
using namespace std;

int main(){
	
	vector <int> vec;
	string line;
	cout << "enter the array comma separated: " << endl;
	getline(cin, line);
	
	stringstream ss(line);
	string token;
	
	while(getline(ss, token, ',')){   
	
		vec.push_back(stoi(token));
	}
	
	int target;
	cout << "enter the target value: ";
	cin >> target;
	
	int l = 0, r = vec.size()-1;
	
	while(l <= r){
	
		int mid = l +(r - l)/2;
		
		if(target == vec[mid]){
		
			cout << mid << endl;
			return 0;
		}
		
		if(vec[l] >= vec[mid]){
		
			if(target > vec[mid] && target <= vec[r]){      // in this case mid is already checked.
			
				l = mid+1;
			}
			else{
			
				r = mid -1;
			}
		}
		
		else{
		
			if(target >= vec[l] && target <= vec[mid]){    // need to check the 'l' value.
			
				r = mid -1;
			}
			else{
		
				l = mid+1;
			}
		}
	}
	
	return 0;
}