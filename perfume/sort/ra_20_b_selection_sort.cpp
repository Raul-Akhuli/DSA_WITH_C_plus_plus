// selection sort

# include <iostream>
# include <vector>
# include <sstream>
# include <algorithm>
using namespace std;


void selectionSort(vector <int> &vec){
	
	int n = vec.size();
	int smallElement;

	for(int i = 0; i < n-1; i++){
	
		smallElement = i;
		for(int j = i+1; j < n; j++){
		
			if(vec[j] < vec[smallElement]){
				smallElement = j;
			}
		}
		if(smallElement != i){
		
			swap(vec[i], vec[smallElement]);
		}
		
	}
}

void printSortedArray(const vector <int> &vec){

	for(int i = 0; i < vec.size(); i++){
	
		cout << vec[i] << " ";
	}
	cout << endl;
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
	
	if(vec.empty()){
	
		cout << "please enter some value." << endl;
		return 0;
	}

	selectionSort(vec);
	printSortedArray(vec);

	return 0;
}