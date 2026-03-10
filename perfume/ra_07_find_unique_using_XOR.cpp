// find unique element using XOR

/*
    Input: 1 2 1 2 5 8 7 8 7
    Output: 5
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
		
	int result = vec[0];
	for(int i = 1; i < vec.size(); i++) {
	
		result = result^vec[i];
	}
	
	cout << result << endl;
}