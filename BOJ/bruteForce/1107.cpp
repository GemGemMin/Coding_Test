#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

// 고려해야할 것
// 버튼 하나를 누를 때마다 cnt에 1을 더함
// 숫자 버튼을 누르는게 up down을 누르는 것보다 클 경우

int main(){
    int N, M, ans;
    bool arr[10];
    memset(arr, true, sizeof(arr));

    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        int temp;
        cin >> temp;
        arr[temp] = false;
    }
    ans = abs(N - 100);
    if(N == 100) {
        cout << 0;
        return 0;
    }
    else {
        for (int i = 0; i < 1000000; i++) {
            bool ck = true;
            string str_num = to_string(i);
            for (int j = 0; j < str_num.size(); j++) {
                if(!(arr[str_num[j]-48])){
                    ck = false;
                    break;
                }
            }
            if (ck) {
                int temp = abs(N - i) + to_string(i).size();
                if(temp < ans) {
                    ans = temp;
                }
            }
        }
    }
    cout << ans;
}