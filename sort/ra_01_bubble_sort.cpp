# include <iostream>
# include <sstream>
# include <vector>
# include <algorithm>
using namespace std;


void bubbleSort(vector <int> &vec){
	
	int n = vec.size();
	
	for(int i = 0; i < n-1; i++){                        // no go for the last index max element got that place.
		
		bool isSwap = false;
		
		for(int j = 0; j < n-i-1; j++){
		
			if(vec[j] > vec[j+1]){

				swap(vec[j], vec[j+1]);
			
				//vec[j] = vec[j] ^ vec[j+1];
				//vec[j+1] = vec[j] ^ vec[j+1];
				//vec[j] = vec[j] ^ vec[j+1];
				
				isSwap = true;
			}
		}
		if(!isSwap) break;
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
	
	bubbleSort(vec);

	for(int i = 0; i < vec.size(); i++){
	
		cout << vec[i] << " ";
	}

    return 0;
}