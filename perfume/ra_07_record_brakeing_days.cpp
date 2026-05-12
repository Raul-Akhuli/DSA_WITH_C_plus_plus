// Record Breaking Days Problem
/*

A day is record-breaking if:

	The number of visitors on that day is strictly greater than all previous days, AND

	The number of visitors is greater than the next day.

For the last day, only condition 1 is required.

*/

# include <iostream>
# include <vector>
# include <sstream>
using namespace std;

int main(){
	
	vector <int> vec;
	string line;
	cout << "enter the numers: " << endl;
	getline(cin, line);

	stringstream ss(line);
	string token;
	
	while(getline(ss, token, ',')){
	
		vec.push_back(stoi(token));
	}
	
	if(vec.empty()){
	
		cout << "nothing to compare with." << endl;
		return 0;
	}
	
	
	int maxi = -1, count = 0;
	
	for(int i = 0; i < vec.size(); i++){
	
		if(vec[i] > maxi && (i == vec.size()-1 || vec[i] > vec[i+1])){
			count++;
		}
		
		// update running maxi in very iteration.
		
		maxi = max(maxi, vec[i]);
		
	}
	
	cout << count << endl;
	
	return 0;
}
