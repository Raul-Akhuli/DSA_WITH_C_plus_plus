# include <iostream>
# include <climits>
using namespace std;



void findSmallLarge(int array[], int n){

    int largest = INT_MIN;                     // initialize max with Integer min value
    int smallest = INT_MAX;                     // initialize min with Integer max value
    int small_index;
    int large_index;
    for(int i = 0; i < n; i++){

    if (array[i] > largest){            // largest = max(array[i], largest);
                                    
        largest = array[i];
        large_index = i;                        // you can use build in function.
    }

    if (array[i] < smallest){          // smallest = min(array [i], smallest); 

        smallest = array[i];
        small_index = i;

    }
}
    cout << "max element: " << largest << " having index: " << large_index << endl;
    cout << "min element: " << smallest << " having index: " << small_index << endl;
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


    cout << "array elements: " << endl;
    for(int i = 0; i < n; i++){

        cout << array[i] << " ";
    }
    cout << endl;

    findSmallLarge(array, n);



    return 0;
}