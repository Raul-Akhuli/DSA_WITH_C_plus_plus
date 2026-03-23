// maximum subarray sum

# include <iostream>
# include <vector>
# include <sstream>
# include <algorithm>
using namespace std;

int main(){

	vector <int> vec;
	string line;
	cout << "enter array elements: " << endl;
	getline(cin, line);

	stringstream ss(line);
	string token;

	while(getline(ss, token, ',')){
	
		vec.push_back(stoi(token));
	}
	
	if(vec.empty()){
	
		cout << "array is empty." << endl;
		return 0;
	}

	int currSum = vec[0], maxi = vec[0];
	for(int i = 1; i < vec.size(); i++){
	
		currSum = max(vec[i], vec[i]+currSum);
		maxi = max(currSum, maxi);
	}

	cout << maxi << endl;
	
	
	return 0;
}