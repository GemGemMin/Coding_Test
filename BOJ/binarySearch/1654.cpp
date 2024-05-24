#include <iostream>
#include <algorithm>
using namespace std;

long long int LAN[10001];
long long int K, N, max_length = 0, ans;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> K >> N;
    for (int i = 0; i < K; i++) {
        cin >> LAN[i];
        if(LAN[i] > max_length) max_length = LAN[i];
    }

    long long int left = 1, right = max_length, mid;
    while (left <= right) {

        mid = (left + right) / 2;

        long long int cnt = 0;

        for (int i = 0; i < K; i++) {
            cnt += LAN[i] / mid;
        }

        if (cnt >= N) {
            left = mid + 1;
            ans = max(ans, mid);
        } else {
            right = mid - 1;
        }

    }
    cout << ans;

}