#include <iostream>
#include <queue>
using namespace std;


int N;
char map[101][101];
bool visited[101][101];
int dy[] = {0, 0, 1, -1};
int dx[] = {1, -1, 0, 0};
queue<pair<int, int>> q;

void BFS(int start_y, int start_x){
    visited[start_y][start_x] = true;
    q.push(make_pair(start_y, start_x));

    while (!q.empty()) {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if(ny < 0 || nx < 0 || ny > N || nx > N) continue;

            if (map[ny][nx] != map[y][x] || visited[ny][nx]) continue;
            // 같은 색이고 방문하지 않았을 때
            visited[ny][nx] = true;
            q.push(make_pair(ny, nx));

        }

    }

}

int main(){
    int cnt = 0, R_cnt = 0;

    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> map[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (visited[i][j]) continue;
            BFS(i, j);
            cnt++;
        }
    }

    // visited 초기화

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if(map[i][j] == 'G') map[i][j] = 'R';
            visited[i][j] = false;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (!visited[i][j]) {
                BFS(i, j);
                R_cnt++;
            }
        }
    }
    cout << cnt << " " << R_cnt;

}