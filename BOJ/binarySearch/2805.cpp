#include <iostream>
#include <algorithm>
using namespace std;

long long tree[1000001];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long n, m, max = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> tree[i];
    }
    sort(tree, tree + n);
    long long low = 0, high = tree[n-1];
    while (low <= high) {
        long long mid = (low + high) / 2;
        long long sum = 0;
        for (int i = 0; i <= n; i++) {
            if(tree[i] > mid) sum += tree[i] - mid;
        }
        if(sum >= m){
            max = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    cout << max;
    return 0;
}