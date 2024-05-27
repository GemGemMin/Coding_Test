#include <iostream>
#include <algorithm>
using namespace std;
char WB[8][8] = {
        'W','B','W','B','W','B','W','B',
        'B','W','B','W','B','W','B','W',
        'W','B','W','B','W','B','W','B',
        'B','W','B','W','B','W','B','W',
        'W','B','W','B','W','B','W','B',
        'B','W','B','W','B','W','B','W',
        'W','B','W','B','W','B','W','B',
        'B','W','B','W','B','W','B','W'
};
char BW[8][8] = {
        'B','W','B','W','B','W','B','W',
        'W','B','W','B','W','B','W','B',
        'B','W','B','W','B','W','B','W',
        'W','B','W','B','W','B','W','B',
        'B','W','B','W','B','W','B','W',
        'W','B','W','B','W','B','W','B',
        'B','W','B','W','B','W','B','W',
        'W','B','W','B','W','B','W','B'
};

int main(){
    int M,N;
    char map[50][50];
    cin >> M >> N;

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> map[i][j];
        }
    }
    int min_cnt = 64;
    for (int i = 0; i <= M - 8; i++) {
        for (int j = 0; j <= N - 8; j++) {
            int cnt_W = 0, cnt_B = 0;
            for (int k = 0; k < 8; k++) {
                for (int l = 0; l < 8; l++) {
                    if(map[i + k][j + l] != BW[k][l]) cnt_B++;
                    if(map[i+k][j+l] != WB[k][l]) cnt_W++;
                }
            }
            min_cnt = min(min_cnt, min(cnt_W, cnt_B));
        }
    }

    cout << min_cnt;
}