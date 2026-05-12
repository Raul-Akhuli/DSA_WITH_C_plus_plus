// maximum stick problem

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
	
	int count = 0, candidate = 0, max = 0;
	
	for(int i = 0; i < vec.size(); i++){
	
		if(count == 0){
	
			candidate = vec[i];
		}
		if(candidate == vec[i]){
		
			count++;
			if(count > max) {
				max = count;
				candidate = vec[i];
			}
		}
	
		else count = 0;
	}
	
	cout << "element is: " << candidate << " max repetation: " << max << endl;

	return 0;
}