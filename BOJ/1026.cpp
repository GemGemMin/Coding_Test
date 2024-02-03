#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int N, S = 0;
    cin >> N;
    int *arr_A = new int[N];
    int *arr_B = new int[N];
    for (int i = 0; i < N; i++) {
        cin >> arr_A[i];
    }

    for(int i = 0; i < N; i++){
        cin >> arr_B[i];
    }
    sort(arr_A, arr_A + N);
    sort(arr_B, arr_B + N,greater<>());
    for(int i = 0; i < N; i++){
        S += arr_A[i] * arr_B[i];
    }
    cout << S << "\n";
    delete[] arr_A;
    delete[] arr_B;
}