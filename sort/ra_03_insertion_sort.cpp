// Insertion sort

# include <iostream>
# include <sstream>
# include <vector>
# include <algorithm>
using namespace std;


void insertionSort(vector <int> &vec){
	
	int n = vec.size();
	
	for(int i = 1; i < n; i++){
	
		int temp = vec[i];
		int j = i-1;
		while(j >= 0 && vec[j] > temp){
		
			vec[j+1] = vec[j];
			j--;
		}
		
		vec[j+1] = temp;
	}

}

void print(const vector <int> &vec){
	
	int n = vec.size();
	for(int i = 0; i < n; i++){
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
	
		cout << "enter some value." << endl;
		return 0;
	}
	
	insertionSort(vec);
	
	print(vec);
	
	return 0;
}