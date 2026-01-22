# include <iostream>
# include <vector>
using namespace std;

int main() {

    vector <char> vec = {'a', 'b', 'c', 'd', 'e'};

    cout << vec.size() << endl;              // size

    vec.push_back('f');                      // push_back
    cout << "after push_back" <<  endl;
    for(char val : vec) {

        cout << val << endl;
    }


    vec.pop_back(); // by default it pop last element of vector.      // pop_back
    cout << "after pop_back" <<  endl;
    for(char val : vec) {

        cout << val << endl;
    }


    cout << "first element" << endl;
    cout << vec.front() << endl;                    // front


    cout << "last element" << endl;                 
    cout << vec.back() << endl;                     // back



    // want to see or access value index wise 
    cout << vec.at(3) << endl;                     // at


    cout << vec.capacity() << endl;               // capacity -- when size exceed make the size double 

    return 0;
}