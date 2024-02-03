#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    // sort한 후에, 앞에서부터 원소 * 그것보다 최대 중량이 높은 줄의 수
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, max = 0;
    cin >> N;
    int *arr = new int[N];
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    sort(arr, arr + N);

    for(int i = 0; i < N; i++){
        int temp = arr[i] * (N - i);
        if(temp > max){
            max = temp;
        }
    }
    cout << max << "\n";
    delete[] arr;
}