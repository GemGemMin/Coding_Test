#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int dp[1001][1001];
int main(){
    string s1, s2;
    cin >> s1 >> s2;
    for (int i = 1; i <= s1.size(); i++) { // s1 count
        for (int j = 1; j <= s2.size(); j++) { // s2 count
            if (s1[i-1] == s2[j-1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else{
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
            }
        }
    }
    cout << dp[s1.size()][s2.size()];
}
/*
 *  0ACAYKP
 * 00000000
 * C0011111
 * A0112222
 * P0112223
 * C0122223
 * A0123333
 * K0123344
 * dp[0][0]
 *
 */