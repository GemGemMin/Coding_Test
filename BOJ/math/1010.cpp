#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, N, M;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> N >> M;
        long long int result = 1;
        // 1부터 N까지 곱을 나누기
        // M부터 M-N까지 곱하기
        for (int j = 1; j <= N; j++) {
            result *= M - j + 1;
            result /= j;
        }
        cout << result << "\n";
    }
}