// convert string into character array

# include <iostream>
# include <vector>
# include <cstring>
using namespace std;

int main(){
	
	string line;
	getline(cin, line);          // responsible for take the input in one line.

    // 1.
	
	//const char* arr = line.c_str();             // non modifiable charcacter array.

    // 2.

    // char arr[line.size() + 1];
    // strcpy(arr, line.c_str());             // copy the string into character array. which is modifiable.


    // 3. 

    vector<char>arr(line.begin(), line.end());     // copy the string into character array. which is modifiable.
    arr.push_back('\0');                         // add null character at the end of the array.

	for(int i = 0; arr[i] != '\0'; i++){
		cout << arr[i] << " ";
	}
	
	return 0;
}