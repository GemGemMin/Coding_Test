#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    int num[3];
    while (true) {
        int cnt = 0;
        for (int i = 0; i < 3; i++) {
            cin >> num[i];
            if(num[i] == 0) cnt++;
        }
        if(cnt == 3) break;
        sort(num, num + 3);
        if (pow(num[0], 2) + pow(num[1], 2) == pow(num[2], 2)) {
            cout << "right\n";
        } else cout << "wrong\n";
    }
    return 0;
}