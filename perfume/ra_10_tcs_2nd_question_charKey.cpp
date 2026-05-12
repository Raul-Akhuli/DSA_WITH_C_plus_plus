// Decrypt values using a key-based cyclic shift over alphabet positions.

/*

Input:
arr = [20, 25, 13, 13, 15]

Process:
Key = 20
Decrypt each:

20 → 0 → 26 → Z
25 → 5 → E
13 → -7 → 19 → S
13 → -7 → 19 → S
15 → -5 → 21 → U

Output:
ZESSU


*/


# include <iostream>
# include <vector>
# include <sstream>
using namespace std;


char numToChar(int n){

	return 'A' + n-1;
}



int main(){

	vector <int> vec;
	string line;
	cout << "enter numbers: ";
	getline (cin, line);
	
	stringstream ss(line);
	string token;
		
	while(getline(ss, token, ',')){
	
		vec.push_back(stoi(token));
	}
	
	if(vec.empty()){
	
		cout << "No input provided. " << endl;
		return 0;
	}
	
	
	
	int n = vec.size();
	
	int key = vec[0];
	
	string result = "";
	
	for(int i = 0; i < n; i++){
	
		int newVal = vec[i] - key;
		
		if(newVal <= 0){
			newVal = newVal+26;
		}		

		/*
			newVal = (vec[i] - key + 26) % 26;
			if(newVal == 0) newVal = 26;			

		*/
		
	
		result += numToChar(newVal);
	}

	cout << "result " << result << endl;
	
	return 0;
}














