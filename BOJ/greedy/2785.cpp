#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, result = 0;
    vector<int> v;

    cin >> N;
    for (int i = 0; i < N; i++) {
        int chain;
        cin >> chain;
        v.push_back(chain);
    }

    sort(v.begin(), v.end());

    while (v.size() > 2) {
        v[0]--;
        result++;

        v[v.size() - 2] += v[v.size() - 1] + 1;
        v.pop_back();

        if (v[0] == 0) {
            v.erase(v.begin());
        }
    }
    if (v.size() == 2) {
        if (v[0] != 0) {
            result++;
        }
    }

    cout << result << endl;
    return 0;
}
