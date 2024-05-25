#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int T, A[51], copy_A[51], ans[51];
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> A[i];
        copy_A[i] = A[i];
    }
    sort(copy_A, copy_A + T);
    int cnt = 0;
    for (int i = 0; i < T; i++) {
        for (int j = 0; j < T; j++) {
            if (A[j] == copy_A[i]) {
                ans[j] = cnt;
                A[j] = -1;
                cnt++;
            }
        }
    }
    for (int i = 0; i < T; i++) {
        cout << ans[i] << " ";
    }
}