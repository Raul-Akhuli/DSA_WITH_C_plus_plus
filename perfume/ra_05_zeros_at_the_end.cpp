// zeros at the end.

/*
	Input: 1 0 2 0 3 0
	Output: 1 2 3 0 0 0
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
	
	int index = 0;
	int n = vec.size();
	for(int i = 0; i < n; i++){
		
		if(vec[i] != 0) {
			
			vec[index++] = vec[i];
		}
	}
	
	for(int i = index; i < n; i++){
	
		vec[i] = 0;
	}
	
	for(int i = 0; i < n; i++){
		
		cout << vec[i] << " ";
	}
	return 0;
}
