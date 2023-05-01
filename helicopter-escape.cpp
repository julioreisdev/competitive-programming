#include <bits/stdc++.h>
using namespace std;

int main() {
    int h,p,f,d;
    cin >> h;
    cin >> p;
    cin >> f;
    cin >> d;
    
    int initial = f;
    while(true) {
        if (initial == h) { 
            cout << "S" << endl;
            break;
        } else if (initial == p) {
            cout << "N" << endl;
            break;
        }

        if (d == -1) {
             initial--;
           if (initial == -1) {
            initial = 15;
           } 
        } else {
            initial++;
            if (initial == 16) {
            initial = 0;
           }
        }
    }
    return 0;
}