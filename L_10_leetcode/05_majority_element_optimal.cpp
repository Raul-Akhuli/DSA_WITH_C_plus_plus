# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;




// need to be sorted.
int findMajority(vector <int> nums, int n) {

    sort(nums.begin(), nums.end());            // sort - time complexity O(n log n);

    int freq = 1, majority = nums[0];                                                     // total - O(n + n log n)
    for(int i = 1; i < n; i++){                // for loop - time complexity O(n)

        if(nums[i] == nums[i-1]) {       // this codition won't work if the array is unsorted.

            freq++;
            if(freq > n/2) {

                majority = nums[i];
            }
        }
        else {

            freq = 1;
            majority = nums[i];
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


    cout << "Majority element is : " << findMajority(vec, n) << endl;

    return 0;
}

