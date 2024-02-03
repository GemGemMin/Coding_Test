#include <iostream>
#include <algorithm>
using namespace  std;


int main() {
    int arr[1001][3];
    int n, R, G,  B;
    cin >> n;
    cin >> R >> G >> B;
    arr[0][0] = R;
    arr[0][1] = G;
    arr[0][2] = B;
    for(int i = 1; i < n; i++){
        cin >> R >> G >> B;
        arr[i][0] = min(arr[i-1][1], arr[i-1][2]) + R;
        arr[i][1] = min(arr[i-1][0], arr[i-1][2]) + G;
        arr[i][2] = min(arr[i-1][0], arr[i-1][1]) + B;
    }
    cout << min(min(arr[n-1][0], arr[n-1][1]), arr[n-1][2]) << "\n";
}
