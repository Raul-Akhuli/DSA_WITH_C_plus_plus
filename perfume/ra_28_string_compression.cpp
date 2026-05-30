//string compression

/*
	Input: aabbccc
	Output: a2b2c3

	Input: aabbbbbbbbbbbb
	Output: a2b12
*/



# include <iostream>
# include <vector>
# include <string>
# include <algorithm>
using namespace std;

void compression(vector <char> &arr){
	
	int idx = 0;
	int n = arr.size();

	for(int i = 0; i < n; i++){

		char ch = arr[i];
		int count = 0;

		while(i < n && arr[i] == ch){

			count++;
			i++;
		}
		
		if(count == 1){
			arr[idx++] = ch;
		}
		else{

			arr[idx++] = ch;
			string counts = to_string(count);
			for(auto s: counts){

				arr[idx++] = s;
			}
		}
		
		i--;                                     // if 'a' last index is 1 then i is already point to 2 because of previous while loop contain i++ 
								// to overcome this situation where next element do not count accurectly go for i--;
	}
	arr.resize(idx);          // to remove last extra character.
}


int main(){

	vector <char> chars;
	char ch;
	while(cin.get(ch) && ch != '\n'){
		chars.push_back(ch);
	}
	

	compression(chars);

	for(int i = 0; i < chars.size(); i++){

		cout << chars[i];
	}
	
	return 0;
}










