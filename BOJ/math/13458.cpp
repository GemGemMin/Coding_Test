#include <iostream>
using namespace std;

int A[1000001];
int main(){
    int N, B, C;
    long long result = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    cin >> B >> C;
    for (int i = 0; i < N; i++) {
        A[i] -= B;
        result += 1;
        if(A[i] <= 0) continue;
        if(A[i] % C != 0) {
            result += (A[i] / C) + 1;
        } else result += (A[i] / C);
    }
    cout << result;
}