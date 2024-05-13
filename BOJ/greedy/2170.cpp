#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, sp, ep, cnt = 0;
    vector<pair<int, int>> line;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> sp >> ep;
        line.push_back(make_pair(sp, ep));
    }

    sort(line.begin(), line.end());

    for (int i = 1; i <= n; i++) {
        if (i == n) {
            cnt += line[i - 1].second - line[i - 1].first;
        }

        if (line[i].first <= line[i - 1].second) {
            // 겹치는 부분이 있을 때
            line[i].first = line[i - 1].first;
            line[i].second = max(line[i].second, line[i - 1].second);
        }
        else{
            // 겹치는 부분이 없을 때
            cnt += line[i - 1].second - line[i - 1].first;

        }

    }
    cout << cnt;
}