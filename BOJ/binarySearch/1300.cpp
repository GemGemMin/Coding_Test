#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<long long> v;
int main(){
    int N, k;
    cin >> N >> k;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            v.push_back(i * j);
        }
    }
    sort(v.begin(), v.end());
    cout << v[k];
}