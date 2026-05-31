// lexiographically next value

/*
    Input: 123654
    Output: 124356
*/


# include <iostream>
# include <vector>
# include <sstream>
# include <algorithm>
using namespace std;


void nextValue(vector <int> &arr){

    int n = arr.size();
    int idx = 0;
    for(int i = 0; i < n-1; i++){

        if(arr[i] > arr[i+1]){
            idx = i-1;
            break;            
        }
    }
    swap(arr[idx], arr[n-1]);


    int start = idx+1;
    int end = n-1;
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}






int main(){

    vector <int> vec;
    string line;
    getline(cin, line);

    stringstream ss(line);
    string token;

    while(getline(ss, token, ',')){
        vec.push_back(stoi(token));
    }

    nextValue(vec);

    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }

    return 0;
}