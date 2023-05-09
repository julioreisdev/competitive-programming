#include <bits/stdc++.h>
using namespace std;

int main () {
    int initial, finish;
    cin >> initial;
    cin >> finish;

    for (int i = initial; i <= finish; i++) {
        int qtd = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                qtd++;
            }
        }
        if (qtd == 2) {
            cout << i << " ";
        }
    }
    cout << endl;
    
    return 0;
}