#include<iostream>
#include<algorithm>
using namespace std;

int arr_n[500001], arr_m[500001];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr_n[i];
    }

    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> arr_m[i];
    }

    sort(arr_n, arr_n + n);
    for (int i = 0; i < m; i++) {
        int find = arr_m[i];
        bool isFound = false;
        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (find < arr_n[mid]){
                high = mid - 1;
            } else if (find > arr_n[mid]) {
                low = mid + 1;
            } else if (find == arr_n[mid]) {
                isFound = true;
                break;
            }
        }
        if(isFound) cout << 1 << " ";
        else cout << 0 << " ";
    }

}