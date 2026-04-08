//uniqueness of an integer array

# include <iostream>
# include <vector>
# include <sstream>
# include <unordered_set>
using namespace std;


bool isUnique(const vector <int> &vec){
	
	unordered_set <int> s;
	
	int n = vec.size();
	
	for(int i = 0; i < n; i++){
	
		s.insert(vec[i]);          // if(s.find(vec[i]) != s.end()) return flase;  o/w return true;  responsible for early detection.
	}
	
	if(s.size() == n) return true;
	else return false;
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
	
	
	if(isUnique(vec)){
	
		cout << "entered array is unique." << endl;
	}
	
	else{
	
		cout << "entered array is not unique." << endl;
	}
	
	return 0;
}