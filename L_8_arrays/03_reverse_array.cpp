# include <iostream>
using namespace std;


void reverseArray(int arr[], int n) {

    int start = 0;
    int end = n-1;

    while (start < end) {



        swap(arr[start], arr[end]);

        // int temp = arr[start];
        // arr[start] = arr[end];          // using third variable, conventional method
        // arr[end] = temp;

        start++;
        end--;
    }
}


int main() {
    int n;
    cout << "enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "enter the elements: " << endl;
    for(int i = 0; i < n; i++) {

        cin >> arr[i];
    }

    reverseArray(arr, n);


    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}