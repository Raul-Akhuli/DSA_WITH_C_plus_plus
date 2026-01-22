# include <iostream>
using namespace std;

// function definition

int sum(int a, int b){              // when we want a task to be performed multiple times
    return a+b;
}

int max(int a, int b){             // therse values are called 'formal parameters'
    if(a > b){
        return a;
    }
    else if(a == b){
        cout << "both are equal" << endl;
    }
    else{
        return b;
    }
}

int main() {
    cout <<sum(10,5) << endl;       // function call / invoke

    cout << max(25, 23) << endl;     // these values are arguments / 'actual parameters'
    return 0;
}