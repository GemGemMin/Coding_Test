#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nA, nB;
    set<int> s;
    cin >> nA >> nB;
    for (int i = 0; i < nA; i++) {
        int temp;
        cin >> temp;
        s.emplace(temp);
    }
    for (int i = 0; i < nB; i++) {
        int temp;
        cin >> temp;
        s.erase(temp);
    }
    cout << s.size() << "\n";
    for (int i: s) {
        cout << i << " ";
    }
}