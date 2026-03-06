// take input without taking size first

# include <iostream>
# include <vector>
# include <sstream>
using namespace std;

int main(){
	
	vector <int> vec;
	string line;
	cout << "enter the array element space separated: ";
	getline(cin, line);
	
	stringstream ss(line);
	
	int x;
	while(ss >> x){
		vec.push_back(x);
	}
	
	for(int i = 0; i < vec.size(); i++){
		cout << vec[i] << " ";
	}
	
	return 0;
}