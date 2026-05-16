// Duch National Flag algorithm

# include <iostream>
# include <vector>
# include <sstream>
using namespace std;


void sortOneTwoThree(vector <int> &vec){
	int n = vec.size();
	int l = 0, m = 0, h = n-1;
	
	while(m <= h){
	
		if(vec[m] == 0){
			swap(vec[l], vec[m]);
			m++;
			l++;
		}
		else if(vec[m] == 1){
			m++;
		}
		else if(vec[m] == 2){
			swap(vec[m], vec[h]);
			h--;
		}
	}
}

void printArr(const vector <int> &vec){
	int n = vec.size();
	for(int i = 0; i < n; i++){
		cout << vec[i] << " ";
	}	
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
	
	sortOneTwoThree(vec);
	
	printArr(vec);
	
	return 0;
}