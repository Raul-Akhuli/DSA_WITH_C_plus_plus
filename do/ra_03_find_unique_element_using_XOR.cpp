// find unique element within duplicate element
// not work if any element appear 3 times.

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
		
	int result = 0;
	for(int i = 0; i < vec.size(); i++){
		result = result ^ vec[i];
	}

	cout << result << endl;
}