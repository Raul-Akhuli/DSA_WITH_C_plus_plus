# include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string token, int l, int r){
	
	while(l >= 0 && r < token.length()){
	
		if(token[l--] != token[r++]){
			return false;
		}
	}
	return true;	
}


int main(){

	string line;
	getline(cin, line);
	
	int l, r;
	int n = line.length();
	
	if(n %2 == 0){
	
		//even
		l = n/2-1;
		r = n/2;
	}

	else{
	
		//odd
		l = n/2;
		r = n/2;

	}

	if(isPalindrome(line, l, r)){
		
		cout << "Palindromic." << endl;
	}
	else {
		cout << "Not Palindromic";
	}
}