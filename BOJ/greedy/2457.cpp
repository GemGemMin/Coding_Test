#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int,int>> v;

bool greater_cp(pair<int, int> a, pair<int, int> b){
    return a.second > b.second;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, sm, sd, em, ed;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> sm >> sd >> em >> ed;
        v.push_back(make_pair(sm * 100 + sd, em * 100 + ed));
    }

    sort(v.begin(), v.end(), greater_cp);
    if(v[0].second < 1201) { // 11월 30일까지 피는 꽃이 없으면 0 출력
        cout << 0;
        return 0;
    }

    sort(v.begin(), v.end(), less<>());
    if (v[0].first > 301) { // 3월 1일 이전 피는 꽃이 없으면 0 출력
        cout << 0;
        return 0;
    }


    int idx = 0;
    // 3월 이전에 피는 꽃이 없을 때와 12월까지 피는 꽃이 없을 떄는 처리 되었음.
    for (int i = 1; i < n; i++) {
        if (v[i].first <= 301) {
            if(v[i].second > v[idx].second) {
                idx = i;
            }
        }
    }
    int cnt = 1;
    while (true) {
        if(v[idx].second > 1130) break;

        pair<int,int> l = {1,1}; // 가장 늦게 지는 꽃
        int l_idx = -1; // 가장 늦게 지는 꽃의 인덱스
        for (int i = idx + 1; i < n; i++) {
            pair<int,int> f = v[i];
            if(f.first <= v[idx].second) {
                if (f.second > l.second) {
                    l = f;
                    l_idx = i;
                }
            }
        }
        idx = l_idx;
        if (l.second == 1) {
            cout << 0; return 0;
        }
        else{cnt++;}
    }


    cout << cnt;
}