# include <iostream>
# include <vector>
using namespace std;


int findMajority(vector <int> nums, int n) {
    
    int count = 0, majority;

    for(int i = 0; i < n; i++) {

        for(int j = 0; j < n; j++) {

            if(nums[i] == nums[j]) {
                
                count++;
                if(!(n%2 == 0)) {

                    if(count > n/2) {

                        majority = nums[i];
                    }
                }
                else {
                    if(count >= n/2) {
                        majority = nums[i];
                    }
                    else {
                        majority = -1;
                    }
                }
            }
        }
    }
    return majority;
}


int main() {
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;

    vector <int> vec(n);
    for(int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    
    cout << "Majority element is : " << findMajority(vec, n)  << endl;

    return 0;
}