# include <iostream>
# include <string>
# include <cctype>
using namespace std;


bool isAlphanumeric(char ch){                   // you can use inbuild isalnum() to detect is it Alphanumeric char or not.
	
	return((ch >= 'A' && ch <= 'Z')||
	   (ch >= 'a' && ch <= 'z')||
	   (ch >= '0' && ch <= '9'));
}

int main(){

	string line;
	getline(cin, line);
	
	int n = line.length();
	int l = 0, r = n-1;
	bool palindrome = true;
	
	while(l < r){
	
		if(!(isAlphanumeric(line[l]))){
			l++;
			continue;
		}
		
		if(!(isAlphanumeric(line[r]))){
			r--;
			continue;
		}
		
		if(tolower(line[l]) != tolower(line[r])){
			palindrome = false;
			break;
		}
		
		
		l++;
		r--;
		
	}

	if(palindrome){
		cout << "valid palindrome." << endl;
	}

	else{
		cout << "not valid palindrome." << endl;
	}
	
}