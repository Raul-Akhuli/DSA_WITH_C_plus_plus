# include <iostream>
# include <vector>
using namespace std;


int findMajority(vector <int> nums, int n) {

    int count = 0 , candidate;

    for(int i = 0; i < n; i++) {

        if(count == 0) {
            
            candidate = nums[i];
        }
        if(candidate == nums[i]) {

            count ++;
            if(count > n/2) {

                candidate = nums[i];
            }
        }
        else {
            count--;
        }
    }
    return candidate;
}


int main() {
    int n;
    cout << "Enter the array size : ";
    cin >> n;

    vector <int> vec(n);
    cout << "Enter the elements : " << endl;
    for(int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    cout << "Majority element is : " << findMajority(vec, n) << endl;

    return 0;
}