# include <iostream>
# include <vector>
using namespace std;

int main() {
    
    int n;
    cout << "Enter size of vector: ";
    cin >> n;
    vector <int> vec(n);
    cout << "Enter elements: " << endl;
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }

    cout << "Maximum possible subarray: " << endl;

    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            for(int k = i; k <= j; k++){
                cout << vec[k];
            }
            cout << " ";
        }
        cout << endl;
    }
    
    return 0;
}