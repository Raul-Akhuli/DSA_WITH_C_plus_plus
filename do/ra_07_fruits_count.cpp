// count fruits


# include <iostream>
# include <vector>
# include <sstream>
# include <unordered_map>                  // TC O(1),  need sorted output import map TC O(logn)
using namespace std;

int main(){

	vector <string> vec;
	string line;
	cout << "enter the list of fruits comma separated: " << endl;
	getline(cin, line);
	
	stringstream ss(line);
	string token;
	
	while(getline(ss, token, ',')){
	
		while(token[0] == ' '){         // remove extra space befor the next string.
		
			token.erase(0, 1);      // 0 - start position, 1 - no of character need to remove.
		}
	
		vec.push_back(token);
	}
	
	
	unordered_map <string, int> freq;
	
	for(const string& fruit : vec){
	
		freq[fruit]++;
	}

	for(const auto &p : freq){
		cout << p.first << " " << p.second << " ";
	}

	return 0;
}



