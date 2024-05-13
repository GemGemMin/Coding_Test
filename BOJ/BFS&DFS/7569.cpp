#include<iostream>
#include<queue>
using namespace std;

int M,N,H;
int map[102][102][102];
int dist[102][102][102];
int dy[] = {0, 0, -1,1, 0,0}; // 동 서 남 북 위 아래
int dx[] = {1, -1, 0, 0,0,0};
int dz[] = {0, 0, 0,0,1,-1};
queue<pair<pair<int, int>, int>> q;

void BFS(){
    while (!q.empty()) {
        int z = q.front().first.first;
        int x = q.front().first.second;
        int y = q.front().second;
        q.pop();
        for (int i = 0; i < 6; i++) {
            int ny = y + dy[i];
            int nx = x + dx[i];
            int nz = z + dz[i];
            if(ny < 0 || ny >= M || nx < 0 || nx >= N || nz < 0 || nz >= H) continue; // 범위를 벗어남
            if (dist[nz][nx][ny] >= 0) continue;
            dist[nz][nx][ny] = dist[z][x][y] + 1;
            q.push({{nz, nx}, ny});
        }
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> M >> N >> H;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < M; k++) {
                cin >> map[i][j][k];
                if (map[i][j][k] == 1) {
                    q.push({{i, j}, k});
                }
                if (map[i][j][k] == 0) {
                    dist[i][j][k] = -1;
                }
            }
        }
    }

    BFS();

    int max_day = 0;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < M; k++) {
                if (dist[i][j][k] == -1) {
                    cout << -1; return 0;
                }
                if(dist[i][j][k] > max_day) {
                    max_day = dist[i][j][k];
                }
            }
        }
    }
    cout << max_day;
    return 0;

}
