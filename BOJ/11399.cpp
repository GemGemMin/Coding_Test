#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int N, sum = 0;
    cin >> N;
    int *arr = new int[N];
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    sort(arr, arr + N);
    for(int i = 0; i < N; i++){
        sum += arr[i] * (N - i);
    }
    cout << sum << "\n";
    delete[] arr;
}