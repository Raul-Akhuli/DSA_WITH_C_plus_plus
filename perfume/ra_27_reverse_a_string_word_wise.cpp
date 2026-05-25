// reverse a string word wise.

# include <iostream>
# include <string>
# include <algorithm>
using namespace std;

int main(){

	string s;
	cout << "enter a string: ";
	getline(cin, s);

	reverse(s.begin(), s.end());

	int n = s.length();
	string ans = "";

	for(int i = 0; i < n; i++){
	
		string word = "";
		
		while(i < n && s[i] != ' '){

			word += s[i];
			i++;
		}

		reverse(word.begin(), word.end());
		
		if(word.length() > 0){
			if(ans.length() == 0){
			
				ans += word;
			}
			else{
			
				ans += " " + word;
			}
		}
	}
	cout << ans << endl;
	return 0;
}