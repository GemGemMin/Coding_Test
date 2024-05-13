#include <iostream>
#include <cstring>
#include <queue>

using namespace std;

int T, I, now_y, now_x, target_y, target_x;
int map[301][301] = {0,};
bool visited[301][301];
int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};
int dx[] = {-2, -1, 1, 2, -2, -1, 1, 2};
queue<pair<int, int>> q;

void BFS(int start_y, int start_x, int end_y, int end_x){

    visited[start_y][start_x] = true;
    q.push(make_pair(start_y, start_x));

    while (!q.empty()) {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();
        if (y == end_y && x == end_x) {
            cout << map[y][x] << "\n";
            return;
        }
        for (int i = 0; i < 8; i++) {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(ny < 0 || nx < 0 || ny >= I || nx >= I) continue; // 체스판 벗어남.
            if (!visited[ny][nx]) {
                map[ny][nx] = map[y][x] + 1;
                visited[ny][nx] = true;
                q.push(make_pair(ny, nx));
            }
        }
    }
}

int main(){
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> I >> now_y >> now_x >> target_y >> target_x;

        BFS(now_y, now_x, target_y,target_x);
        memset(map, 0, sizeof(map));
        memset(visited, false, sizeof(visited));
        while(!q.empty()) q.pop();
    }

}