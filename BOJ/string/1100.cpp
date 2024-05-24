#include <iostream>
using namespace std;

char c[8][8];
int main(){
    int result = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> c[i][j];
            if (c[i][j] == 'F' && ((i + j) % 2) == 0) {
                result += 1;
            }
        }
    }
    cout << result;
}