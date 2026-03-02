# include <iostream>
using namespace std;

int main(){
    int n, m;

    cin >> n;
    cin >> m;

    int sum = 0;

    for(int i = n; i <= m; i++){
        sum += i*i*i;
    }

    cout << sum << endl;
    return 0;
}