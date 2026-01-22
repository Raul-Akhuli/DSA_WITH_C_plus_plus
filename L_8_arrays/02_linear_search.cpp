# include <iostream>
using namespace std;


void linearSearch(int array[], int n, int need) {

    for(int i = 0; i < n; i++){
        
        if(array[i] == need) {

            cout << "index : " << i << endl;
            return;
        }

    }

    cout << "element not present" << endl;
}

int main() {
    int n;
    cout << "enter the size: ";
    cin >> n;

    int array[n];

    cout << "enter the elements: " << endl;
    for(int i = 0; i < n; i++){

        cin >> array[i];
    }

    int need;
    cout << "enter the desire element: ";
    cin >> need;


    linearSearch(array, n, need);

    return 0;
}