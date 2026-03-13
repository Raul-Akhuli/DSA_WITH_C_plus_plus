// anagrams

# include <iostream>
# include <vector>
# include <sstream>
# include <unordered_map>
using namespace std;


bool areAnagram(string str1, string str2){
	
	if(str1.length() != str2.length()) return false;
	
	unordered_map <char, int> freq;
	
	for(int i = 0; i < str1.length(); i++){
	
		freq[str1[i]]++;
		freq[str2[i]]--;
	}
	
	for(auto const &p : freq){
	
		if(p.second != 0) return false;
	}
	return true;
}


int main(){

	string line;
	cout << "enter first string: ";
	getline(cin, line);

	string line1;
	cout << "enter second string: ";
	getline(cin, line1);

	if(areAnagram(line, line1)){
		cout << "yes they are anagram.";
	}
	else{
		cout << "they are not anagram.";
	}



	return 0;
}



