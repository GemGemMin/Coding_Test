#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
using namespace std;

int map[25][25], N;
bool visited[25][25];
int dy[] = {1,-1,0,0};
int dx[] = {0,0,-1,1};
vector<int> result;

void DFS(int sy, int sx){
    if(visited[sy][sx] || map[sy][sx] == 0) return;

    int cnt = 1;

    stack<pair<int, int>> stk;
    stk.push({sy, sx});
    visited[sy][sx] = true;
    while (!stk.empty()) {
        int y = stk.top().first;
        int x = stk.top().second;
        stk.pop();
        for (int i = 0; i < 4; i++) {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(ny >= N || nx >= N || ny < 0 || nx < 0) continue;
            if(map[ny][nx] == 1 && !visited[ny][nx]) {
                cnt++;
                stk.push({ny, nx});
                visited[ny][nx] = true;
            }
        }
    }
    result.push_back(cnt);
}

int main(){

    cin >> N;

    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < s.length(); j++) {
            map[i][j] = int(s[j]-48);
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if(map[i][j] == 1) DFS(i, j);
        }
    }

    cout << result.size() << "\n";
    sort(result.begin(), result.end());
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << "\n";
    }
}