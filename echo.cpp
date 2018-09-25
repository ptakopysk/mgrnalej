#include <iostream>

using namespace std;

int main(){
    for(int i = 0; i < 10000; i++) {
        int number;
        cin >> number;
        int doublenumber = number * 2;
        cout << number << "*2=" << doublenumber << endl;
    }
    return 0;
}


