// check parentheses

# include <iostream>
# include <stack>
# include <string>
using namespace std;


bool check(string line){

	stack <char> s;
	for(int i = 0; i < line.length(); i++){
	
		if(line[i] == '[' || line[i] == '{' || line[i] == '('){
		
			s.push(line[i]);
		}
		
		else{
			
			if(s.empty()) return false;
			
			char ch = s.top();
			s.pop();
			
			if(ch == '(' && line[i] != ')' ||
			   ch == '{' && line[i] != '}' ||
			   ch == '[' && line[i] != ']') {
				
				return false;
			}
		}
	}
	return s.empty();

}




int main(){

	string line;
	getline(cin, line);

	if(check(line)){
	
		cout << "Completely fine.";
	}
	else{
	
		cout << "Not fine.";
	}
		
	return 0;
}