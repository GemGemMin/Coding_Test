#include <iostream>

using namespace std;

int dp[101][101] = {0};


int main(){
    int N, M, K;
    cin >> N >> M >> K;

    for (int i = 1; i <= 100; i++) {
        dp[i][0] = 1;
        dp[0][i] = 1;
    }
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            dp[i][j] = dp[i-1][j] + dp[i][j-1];
            if (dp[i][j] > 1000000000) dp[i][j] = 1000000000;
        }
    }
    // dp 배열 초기화

    if(dp[N][M] < K){
        cout << -1;
        return 0;
    }
    int num_a = N;
    int num_z = M;
    for (int i = 0; i < N + M; i++) {
        int under_k = dp[num_a - 1][num_z];
        if (num_a == 0) {
            cout << 'z';
            num_z--;
        } else if (num_z == 0) {
            cout << 'a';
            num_a--;
        } else if (K <= under_k) {
            cout << 'a';
            num_a--;
        } else{
            K = K - under_k;
            cout << 'z';
            num_z--;
        }
    }

}