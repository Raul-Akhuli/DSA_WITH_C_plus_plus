//Input: daabcbaabcbc part: abc
//Output: dab


# include <iostream>
# include <string>
using namespace std;

int main(){

	string line;
	cout << "enter the string: ";
	getline(cin, line);
	
	string part;
	cout << "give the reoccuring part: ";
	getline(cin, part);
	
	while((line.length() > 0) &&(line.find(part) < line.length())){
	
		line.erase(line.find(part), part.length());
	}
	
	cout << "resulted string is: " << line << endl;
}