# include <iostream>
# include <vector>
# include <sstream>
# include <algorithm>
using namespace std;

int main() {

    vector <int> vec;

    string line;
    getline(cin, line);

    stringstream ss(line);

    int x;
    while(ss >> x) {
        vec.push_back(x);
    }


    sort(vec.begin(), vec.end());

    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }


}

