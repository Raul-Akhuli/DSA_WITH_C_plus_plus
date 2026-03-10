// take comma separated input.

# include <iostream>
# include <vector>
# include <sstream>
using namespace std;

int main(){
	
	vector <int> vec;
	string line;
	getline(cin, line);
	stringstream ss(line);
	
	string token;
	while(getline(ss, token, ',')){
	
		vec.push_back(stoi(token));         // stoi remove extra space also.
	}
		
	int sum = 0;
	for(int i = 1; i < vec.size(); i++) {
	
		sum += vec[i];
	}
	
	cout << sum << endl;
}