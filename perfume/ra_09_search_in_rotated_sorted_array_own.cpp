// search in rotated sorted array.

/*
    Input = 3,4,5,6,7,0,1,2   target = 0
    Output = 5
*/


/*
    first we have to check for the sorted part.
    then find element present on the sorted part or not.
    go for the unsorted part the separate the sorted and unsorted part.
    then do the same.
*/

#include<iostream>
#include<vector>
#include<sstream>
using namespace std;

int findIndex(vector <int> arr, int target){

    int n = arr.size();

    int l = 0;
    int r = n-1;

    while(l <= r){                                 // if l and r are pointing same element and that is the target element. so you have to run the loop to get mid = target.
        
        int mid = l + (r-l)/2;

        if (arr[mid] == target) return mid;

        if(arr[mid] >= arr[l]){                        // left part is sorted
            if(target < arr[mid] && target >= arr[l]){                // what if element present at first (that's why '>=').
                r = mid-1;
            }
            else{
                l = mid +1;
            }
        }
        else{
            if(target > arr[mid] && target <= arr[r]){               // what if element present at last (that's why '<=').
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }
    }
    return -1;
}


int main(){

    vector<int>vec;
    string line;
    cout << "enter no ";
    getline(cin, line);

    stringstream ss(line);
    string token;

    while(getline(ss, token, ',')){
        vec.push_back(stoi(token));
    }

    int target;
    cout << "enter the target value: ";
    cin >> target;

    cout << findIndex(vec, target) << endl;
    return 0;
}