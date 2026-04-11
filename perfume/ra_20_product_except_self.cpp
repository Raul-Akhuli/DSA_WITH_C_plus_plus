// product of array except self

// Input: 1,2,3,4
// Output: 24 12 8 6

# include <iostream>
# include <vector>
# include <sstream>
using namespace std;

void productExceptSelf(const vector <int> &vec){

	int n = vec.size();
	vector <long long> result(n, 1);

	long long prefix = 1;
	for(int i = 0; i < n; i++){
	
		result[i] = prefix;
		prefix *= vec[i];
	}
	long long suffix = 1;
	for(int i = n-1; i >= 0; i--){
	
		result[i] *= suffix;
		suffix *= vec[i];
	}


	for(int i = 0; i < n; i++){
		cout << result[i] << " ";
	}

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
	
	if(vec.empty()) return 0;
	
	productExceptSelf(vec);
	

	return 0;
}