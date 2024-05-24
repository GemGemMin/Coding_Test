#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, Alpha[26] = {};
    cin >> N;
    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        Alpha[s[0] - 97] += 1;
    }
    bool exist = false;
    for (int i = 0; i < 26; i++) {
        if (Alpha[i] >= 5) {
            exist = true;
            cout << char(97 + i);
        }
    }
    if (!exist) {
        cout << "PREDAJA";
    }
    return 0;
}
