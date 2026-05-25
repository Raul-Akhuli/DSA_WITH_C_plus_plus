// reverse a string

/*
    Input: "hello"
    Output: "olleh"
*/

# include <iostream>
# include <string>
using namespace std;

int main(){

	string line;
	cout << "enter a string: ";
	getline(cin, line);
	
	int l = 0, r = line.length() - 1;

	while(l < r){
	
		swap(line[l], line[r]);
		l++;
		r--;
	}

	cout << "after reverse: " << line << endl;
	
	return 0;
}