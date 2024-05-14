#include<iostream>
using namespace std;

int main(){
    int N, a, fib[41][2] = {1, 0, 0, 1};
    for (int i = 2; i < 41; i++) {
        fib[i][0] = fib[i-2][0] + fib[i-1][0];
        fib[i][1] = fib[i-2][1] + fib[i-1][1];
    }

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> a;
        cout << fib[a][0] << " " << fib[a][1] << "\n";
    }
}