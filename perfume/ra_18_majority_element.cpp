// majority element.

/*
	Input: 3,2,3
	Output: 3(>n/2)
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
	string token;
	
	while(getline(ss, token, ',')){
		vec.push_back(stoi(token));
	}
	
	int n = vec.size();
	int count = 0, candidate = vec[0];
	bool found = false;

	for(int i = 0; i < n; i++){
	
		if(count == 0){
			candidate = vec[i];
		}
		if(candidate == vec[i]){
			count++;
			if(count >= n/2){
				cout << "majority element is: " << candidate << endl;
				found = true;
				break;
			}
		}
		else{
			count--;
		}
	}
	
	return 0;
	
}