// marge 2 sorted array.

/*
    Input: A = [1, 2, 3, 0, 0, 0], B = [2, 5, 6]
    Output: [1, 2, 2, 3, 5, 6]
*/

# include <iostream>
# include <vector>
# include <sstream>
using namespace std;

vector <int> takeInput(){
	
	vector <int> vec;
	string line;
	getline(cin, line);

	stringstream ss(line);
	string token;
	
	while(getline(ss, token, ',')){
		vec.push_back(stoi(token));
	}

	return vec;
}


vector <int> margeArr(vector <int> A, vector <int> B){

	int idx = A.size()-1;
	int i = A.size() - B.size()-1;
	int j = B.size()-1;
	
	while(i >= 0 && j >= 0){
		if(A[i] > B[j]){
			A[idx--] = A[i--];
		}
		else if(A[i] < B[j]){
			A[idx--] = B[j--];
		}
		else{
			A[idx--] = B[j--];
		}
	}
	while(j >= 0){
		A[idx--] = B[j--];
	}
	
	return A;
}

int main(){	
	
	vector <int> A, B;

	cout << "enter first array with extra 0 as per 2nd array size: ";
	A = takeInput();

	cout << "enter second array: ";
	B = takeInput();

	cout << endl;
	
	A = margeArr(A, B);
	
	for(int i = 0; i < A.size(); i++){
	
		cout << A[i] << " ";
	}
	
	return 0;
}

















