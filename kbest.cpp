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
    for (int i = 0; i < N; i++) {
        cin >> number;
        // see if number is bigger than sth we have
        bool keep = false;
        for (int j = 0; j < K; j++) {
            if (kbest[j] < number) {
                keep = true;
                break;
            }
        }
        if (keep) {
            // replace minimum with number
            int min = 40000;
            int mini = -1;
            for (int j = 0; j < K; j++) {
                if (kbest[j] < min) {
                    min = kbest[j];
                    mini = j;
                }
            }
            kbest[mini] = number;
        }
    }
    for (int i = 0; i < K; i++) {
        cout << kbest[i] << endl;
    }
    return 0;
}


