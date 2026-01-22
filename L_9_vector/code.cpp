# include <iostream>
# include <vector>
using namespace std;

int main() {

    // you can initialize vector without value like  'vector <int> vec;'
    vector<int>vec = {1, 2, 3};

    cout << vec[0] << endl; 

    // another initialization 
    vector <int> vec1(5, 0);             // create a vector of size 5 and put the value 0 in all index.


    // for this type of data structor (vector, stack, queue, set) you use for-each loop to access the value not the index.
    for(int val : vec1) {
        cout << val << endl;
    }

    return 0;
}