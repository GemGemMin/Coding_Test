#include <iostream>
using namespace std;

int main(){
    int num[5];
    for (int i = 0; i < 5; i++) {
        cin >> num[i];
    }
    int result = 1;
    while (true) {
        int cnt = 0;
        for (int i = 0; i < 5; i++) {
            if (result % num[i] != 0) {
                cnt++;
            }
        }
        if (cnt <= 2) {
            break;
        }
        result ++;
    }
    cout << result;
}