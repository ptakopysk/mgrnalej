#include <iostream>

using namespace std;

int main(){
    int max = -1;
    int number;
    while (cin >> number) {
        if (number > max) {
            max = number;
        }
    }
    cout << max << endl;
    return 0;
}


