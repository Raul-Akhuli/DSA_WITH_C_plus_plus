// longest palindromic substring.

# include <iostream>
# include <string>
using namespace std;


void expandFmiddle(const string &line, int l, int r, int &start, int &maxlen){

	while(l >= 0 && r < line.length() && line[l] == line[r]){
	
		int currlen = r -l + 1;
		
		if(currlen > maxlen){
		
			start = l;
			maxlen = currlen;
		}
		
		l--;
		r++;
	}
}




string longPalinSub(const string &line){
	
	int start = 0;
	int maxlen = 1;
	
	for(int i = 0; i < line.length(); i++){

		expandFmiddle(line, i, i, start, maxlen);    // for odd length.

		expandFmiddle(line, i, i+1, start, maxlen);  // for even length.
	
	}

	return line.substr(start, maxlen);

}



int main(){
	
	string line;
	getline(cin, line);

	if(line.empty()){
		cout << "enter some character.";
		return 0;
	}	

	cout << longPalinSub(line) << endl;

	return 0;	
}