// pair sum
// it has to be a sorted array.

/* 
	Input: 2 7 11 13 15 target = 22
	Output: Indexs are: 1 and 4
*/

# include <iostream>
# include <vector>
using namespace std;

int main() {
	
	int n;
	cout << "enter vector size: ";
	cin >> n;
	
	vector <int> vec(n);
	for(int i = 0; i < n; i++){
		cin >> vec[i];
	}
	
	int target;
	cout << "enter the target value: ";
	cin >> target;

	int l = 0, r = n-1;
	int sum;
	while(l < r){
		
		sum = vec[l] + vec[r];

		if(sum == target){
	
			cout << "Indexs are: " << l << " and " << r << endl;
			break;
		}
		else if(sum < target){
			l++;
		}
		else {
			r--;
		}
	}
	

	
	return 0;
}