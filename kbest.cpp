#include <iostream>

using namespace std;

int N = 10000;

int K = 5;

int main(){
    int kbest[K];
    int number;
    for (int i = 0; i < K; i++) {
        kbest[i] = -1;
    }
    for(int i = 0; i < N; i++) {
        cin >> number;
        for (int j = 0; j < K; j++) {
            if (kbest[j] < number) {
                kbest[j] = number;
                break;
            }
        }
    }
    for (int i = 0; i < K; i++) {
        cout << kbest[i] << endl;
    }
    return 0;
}


