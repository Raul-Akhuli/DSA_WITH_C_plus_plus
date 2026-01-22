# include <iostream>
# include <vector>
using namespace std;

int main() {

    int result = 0;
    vector <int> numes = {4, 1, 2, 4, 2, 5, 1};

    for(int val : numes) {
        result = result ^ val;

    }

    cout << "single element is: " << result << endl;

    return 0;
}