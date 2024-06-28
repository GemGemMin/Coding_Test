#include <iostream>
#include <algorithm>
using namespace std;

int num[100001];
int dp[100001];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> num[i];
    }
    dp[0] = 0;
    dp[1] = num[1];
    int result = dp[1];
    for (int i = 2; i <= n; i++) {
        dp[i] = max(dp[i-1] + num[i], num[i]);
        if(dp[i] > result) result = dp[i];
    }
    cout << result;
}