#include <iostream>
#include <algorithm>
using namespace std;

int arr[101], dp[10001];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    dp[0] = 1;
    for (int i = 0; i < n; i++) { // arr count
        for (int j = arr[i]; j <= k; j++) { // dp count
            dp[j] = dp[j] + dp[j - arr[i]];
        }
    }
    cout << dp[k];
}
/*
 * 3 7
 * 1
 * 2
 * 5 일 때
 * dp[1] = 1원을 만들 수 있는 경우의 수 = 1원으로 1개
 * dp[2] = 2원을 만들 수 있는 경우의 수 + 1원을 만들 수 있는 경우의 수 + 0원을 만들 수 있는 경우의 수
 * dp[3] = 3원을 만들 수 있는 경우의 수 = 2원을 만들 수 있는 경우의 수 + 1원을 만들 수 있는 경우의 수
 * dp[4] = 3원을 만들 수 있는 경우의 수 + 2원을 만들 수 있는 경우의 수
 * dp[5] = 4원을 만들 수 있는 경우의 수 + 3원을 만들 수 있는 경우의 수 + 0원을 만들 수 있는 경우의 수
 * dp[6] = 5원을 만들 수 있는 경우의 수 + 4원을 만들 수 있는 경우의 수 + 1원을 만들 수 있는 경우의 수
 */