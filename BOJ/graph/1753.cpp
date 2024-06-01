#include <iostream>
#include <queue>
#include <vector>
using namespace std;

#define INF 98765432

priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
vector<pair<int, int>> node[20001];
int value[20001];


int main(){

    int V, E, K;
    cin >> V >> E >> K;
    for (int i = 0; i < E; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        node[u].push_back({v, w});
    }

    for (int i = 1; i <= V; i++) { // 노드들을 INF로 초기화
        value[i] = INF;
    }

    value[K] = 0;
    pq.push({0, K});

    while (!pq.empty()) {
        int x = pq.top().first;
        int U = pq.top().second;
        pq.pop();
        for (int i = 0; i < node[U].size(); i++) {
            int v = node[U][i].first;
            int w = node[U][i].second;

            if (value[v] > x + w) {
                value[v] = x + w;
                pq.push({x + w, v});
            }
        }
    }
    for (int i = 1; i <= V; i++) {
        if(value[i] == INF) cout << "INF\n";
        else cout << value[i] << "\n";
    }

}