#include<iostream>
#include<string>
#include<queue>
using namespace std;

priority_queue<string, vector<string>, greater<>> pq;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;
    for (int i = 0; i < N + M; i++) {
        string str;
        cin >> str;
        pq.push(str);
    }
    queue<string> q;
    int size = pq.size();
    for (int i = 0; i < size-1; i++) {
        string s = pq.top();
        pq.pop();
        if (s == pq.top()) {
            q.push(s);
        }
    }
    cout << q.size() << "\n";
    while (!q.empty()) {
        cout << q.front() << "\n";
        q.pop();
    }

}