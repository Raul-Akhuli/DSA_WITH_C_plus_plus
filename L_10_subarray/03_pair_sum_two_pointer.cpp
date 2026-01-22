# include <iostream>
# include <vector>
using namespace std;



vector <int> pairSum(vector <int> vec, int n, int target) {
    vector <int> result;
    
    int left = 0, right = n-1;

    while(left < right) {
        
        int ps = vec[left] + vec[right];

        if(ps > target) {
            right--;
        }    
        else if(ps < target) {
            left++;
        }
        else if(ps == target) {
            result.push_back(left);
            result.push_back(right);
            break;
        }
        
    }
    return result;
}


int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector <int> vec(n);
    for(int i = 0; i < n; i++) {
        cin >> vec[i];
    }


    int target;
    cout << "Enter the target: ";
    cin >> target;


    vector <int> ans = pairSum(vec, n, target);

    if (!ans.empty()){
        cout << ans[0] << ", " << ans[1];
    }
    else {
        cout << "no pair found" << endl;
    }

    return 0;
}