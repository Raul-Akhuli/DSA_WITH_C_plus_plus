# include <iostream>
using namespace std;

int main(){

    // Implicite type casting (conversion)       small ---> big
    float num = 25.77f;
    double newname = num;
    cout << newname << endl;



    // Explicite type casting                    big ---> small
    double price = 100.99;

    int newprice = (int)price;

    cout << newprice << endl;

    return 0;
}