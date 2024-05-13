#include <iostream>
#include <string>
#include <queue>
using namespace std;

#define N 0
#define S 1

int gear[10001][8];
int now[1001][3];

int main(){
    int T, K;
    int g, d;
    queue<pair<int, int>> q;
    cin >> T;

    for (int i = 0; i < T; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < s.length(); j++) {
            gear[i][j] = s[j] - 48;
        }
        now[i][0] = 0;
        now[i][1] = 2;
        now[i][2] = 6;
    }
    // 톱니 바퀴 입력

    cin >> K;
    for (int i = 0; i < K; i++) {
        cin >> g >> d;
        if(gear[g][])
    }

}