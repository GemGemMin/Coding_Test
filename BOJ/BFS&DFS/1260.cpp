#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int map[1001][1001];

void BFS(int N, int start_node){
    bool visit[1001] = {};
    queue<int> q;
    q.push(start_node);
    visit[start_node] = true;
    while (!q.empty()) {
        int f = q.front();
        q.pop();
        cout << f << " ";
        for (int i = 1; i <= N; i++) {
            if (map[f][i] == 1 && !visit[i]) {
                q.push(i);
                visit[i] = true;

            }
        }

    }
    cout << "\n";
}

void DFS(int N, int start_node){
    bool visit[1001] = {};
    stack<int> stk;
    stk.push(start_node);
    while (!stk.empty()) {
        int t = stk.top();
        stk.pop();
        if(visit[t]) continue;
        visit[t] = true;
        cout << t << " ";
        for (int i = N; i >= 1; i--) {
            if (map[t][i] == 1 && !visit[i]) {
                stk.push(i);
            }
        }

    }
    cout << "\n";
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, V;
    cin >> N >> M >> V;
    for (int i = 0; i < M; i++) {
        int s, e;
        cin >> s >> e;
        map[s][e] = 1;
        map[e][s] = 1;
    }
    DFS(N, V);
    BFS(N, V);

}