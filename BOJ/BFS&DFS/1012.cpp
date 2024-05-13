#include <iostream>
#include <queue>
using namespace std;

int T, M, N, K, result = 0;
int map[51][51];
bool visited[51][51];
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

            if(ny < 0 || nx < 0 || ny > M || nx > N) continue;

            if (map[ny][nx] == 1 && !visited[ny][nx]) {
                visited[ny][nx] = true;
                q.push(make_pair(ny, nx));
            }
        }

    }
}

int main(){
    cin >> T;
    for(int i = 0; i < T; i++){
        cin >> M >> N >> K;
        for (int j = 0; j < K; j++) {
            int temp_y, temp_x;
            cin >> temp_y >> temp_x;
            map[temp_y][temp_x] = 1;
        }
        for (int j = 0; j < M; j++) {
            for (int k = 0; k < N; k++) {
                if(map[j][k] == 1 && !visited[j][k]) {
                    BFS(j,k);
                    result++;
                }
            }
        }
        cout << result << "\n";

        for (int j = 0; j < M; j++) {
            for (int k = 0; k < N; k++) {
                map[j][k] = 0;
                visited[j][k] = false;
            }
        }
        result = 0;
    }


}