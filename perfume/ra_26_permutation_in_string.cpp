// permutation in string.

/*
    Input: s1 = "ab" s2 = "eidbaooo"
    Output: true
    
*/

# include <iostream>
# include <string>
# include <vector>
using namespace std;

bool isFreqSame(vector <int> freq1, vector <int> freq2){
	
	for(int i = 0; i < 26; i++){
		if(freq1[i] != freq2[i]){
			return false;
		}
	}
	
	return true;
}

int main(){

	string s1;
	cout << "enter string part to check if palindrome or not: ";
	getline(cin, s1);

	string s2;
	cout << "enter whole string: ";
	getline(cin, s2);
	
	vector <int> freq(26, 0);
	
	for(int i = 0; i < s1.length(); i++){
		
		freq[s1[i] -'a']++;
	}
	
	int windSize = s1.length();

	for(int i = 0; i < s2.length(); i++){
	
		int windIdx = 0, idx = i;
		vector <int> windFreq(26, 0);
		
		while(windIdx < windSize && idx < s2.length()){
			
			windFreq[s2[idx] - 'a']++;
			windIdx++;
			idx++;
		}

		if(isFreqSame(freq, windFreq)){
			cout << "true" << endl;
			return 0;
		}
	}
	cout << "false" << endl;
	return 0;
}



