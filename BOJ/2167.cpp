#include<iostream>
#include<cstring>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int row, column, K;
    cin >> row >> column;
    long long sum[301][301];
    memset(sum, 0, sizeof(sum));
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= column; j++) {
            cin >> sum[i][j];
            sum[i][j] += sum[i-1][j] + sum[i][j-1] -sum[i-1][j-1];
        }
    }
    /*
     * 1 4 7
     * 2 5 8
     * 3 6 9
     */

    /*
     * 1 5 12
     * 3 12 37
     * 6 21 55
     */

    cin >> K;
    for (int l = 0; l < K; l++) {
        int i, j, x, y;
        cin >> i >> j >> x >> y;
        cout << sum[x][y] - sum[i-1][y] - sum[x][j-1] + sum[i-1][j-1] << "\n";
    }
}