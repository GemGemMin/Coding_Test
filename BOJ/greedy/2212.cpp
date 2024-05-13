#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b){
    return a > b;
}

int main(){
    int N, K, s[10001], dif[10001];
    cin >> N >> K;
    for (int i = 0; i < N; i++) {
        cin >> s[i];
    }
    sort(s, s + N);
    for (int i = 0; i < N-1; i++) {
        dif[i] = s[i + 1] - s[i];
    }

    sort(dif, dif + N - 1, compare);

    int sum = 0;
    for (int i = K - 1; i < N - 1; i++) {
        sum += dif[i];
    }
    cout << sum;
}