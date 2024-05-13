#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b){
    return a.first < b.first;
}
int main(){
    // 시작 시간이 종료시간보다
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, s, t;
    vector<pair<int,int>> v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s >> t;
        v.push_back(make_pair(s, t));
    }
    sort(v.begin(), v.end());

    priority_queue<int, vector<int>, greater<>> result;

    result.push(v[0].second);
    for (int i = 1; i < v.size(); i++) {
        result.push(v[i].second);
        if (result.top() <= v[i].first) {
            result.pop();
        }
    }
    cout << result.size();


}