// array = [7, 2, 8, 3]  target = 9
// output = 7, 2 or 0, 1


# include <iostream>
# include <vector>
using namespace std;


//brute force approach

vector <int> pairSum(vector <int> vec, int n, int target) {
    vector <int> ans;
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++){
            if((vec[i] + vec[j]) == target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}


int main() {
    int n, need=0, result;
    cout << "enter the vector size: ";
    cin >> n;

    vector <int> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }

    int target;
    cout << "enter target: ";
    cin >> target;

    vector <int> ans = pairSum(vec, n, target);

    cout << ans[0] << ", " << ans[1] << endl;

    return 0;
}


