#include <iostream>

using namespace std;

#define MOD 1000000

int arr[5001];
int dp[5001] = {0};
int main(){
    string s;
    cin >> s;

    if(s[0] == '0') { // 0이 첫번째 자리에 나왔을 때에 대한 예외 처리
        cout << 0;
        return 0;
    }

    for (int i = 0; i < s.length(); i++) {
        arr[i] = s[i] - 48;
    }

    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= s.length(); i++) {

        if(arr[i-1] >= 1 && arr[i-1] <= 9){
            dp[i] = (dp[i - 1] + dp[i]) % MOD;
        }
        if(((arr[i-2] * 10) + arr[i-1]) >= 10 && (arr[i-2] * 10) + arr[i-1] <= 26){ // 앞의 인덱스랑 연결했을 때 10 이상 26 이하이면
            dp[i] = (dp[i - 2] + dp[i]) % MOD;
        }


        if(arr[i-1] == 0 && (arr[i-2] == 1 || arr[i-2] == 2)){ // 0이 있는 경우 반드시 앞에 1이나 2가 있어야 함
            dp[i] = dp[i - 2];
        }

        else if(arr[i-1] == 0 && (arr[i-2] != 1 && arr[i-2] != 2)) { // 암호를 해석할 수 없는 경우
            cout << 0;
            return 0;
        }

    }
    cout << dp[s.length()];

}

// 25114일 때
/*
 * dp[0] = 1
 * dp[1] = 1
 * dp[2] = 2
 * dp[3] = 2
 * dp[4] = 4
 * dp[5] = 6
 *
 */

// 1111111111일 때
/*
 * dp[1] = 1
 * dp[2] = 2
 * dp[3] = 3
 * dp[4] = 5
 * dp[5] = 8
 * dp[6] =
 */

// 121074110
/*
 * dp[1] = 1
 * dp[2] = 2
 * dp[3] = 3
 * dp[4] = 2
 */

// 1210
/*
 * dp[1] = 1
 * dp[2] = 2
 * dp[3] = 3
 * dp[4] = 2
 */