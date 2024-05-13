#include<iostream>
#include<queue>
#include<vector>
#include<cstring>

using namespace std;
int map[21][21], visited[21][21];
int dy[] = {1, -1, 0, 0};
int dx[] = {0, 0, -1, 1}; // 상하좌우
int shark_size = 2, result = 0, sx, sy, ate_count = 0;
int N;


int BFS(int a, int b){
    queue<pair<int, int>> q;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;
    for(int i = 0; i < N; i++)
        memset(visited[i], 0, sizeof(int)*N);
    int shortest_dist = 0;

    q.push({a, b});
    visited[a][b] = 1;
    while (!q.empty()) {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();
        if(visited[y][x] == shortest_dist) {
            break;
        }
        for (int i = 0; i < 4; i++) {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if (ny < 0 || ny >= N || nx < 0 || nx >= N || visited[ny][nx])
                continue;

            if (map[ny][nx] == 0 || map[ny][nx] == shark_size) {
                visited[ny][nx] = visited[y][x] + 1;
                q.push({ny, nx});
            } else if (map[ny][nx] < shark_size) {
                if(!shortest_dist) ate_count++;
                visited[ny][nx] = visited[y][x] + 1;
                shortest_dist = visited[ny][nx];
                pq.push({ny, nx});
            }
        }
    }
    if (pq.empty()) { // 먹을 수 있는 물고기가 없을 때
        return 0;
    }
    sy = pq.top().first;
    sx = pq.top().second;
    map[sy][sx] = 0;


    if (ate_count == shark_size) {
        // 아기 상어의 크기와 같은 수의 물고기를 먹었을 때
        shark_size++;
        ate_count = 0;
    }
    return visited[sy][sx] - 1; // 처음 상어가 있었던 곳을 1로 설정했으니까 1 빼야함.
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> map[i][j];
            if(map[i][j] == 9) {
                sy = i;
                sx = j;
                map[i][j] = 0;
            }
        }
    }

    while (true) {
        int dist = BFS(sy, sx);
        if(!dist) break;
        result += dist;
    }
    cout << result;
}