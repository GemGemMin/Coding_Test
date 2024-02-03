#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

#define MAX_SIZE 101

int n, m;
int map[MAX_SIZE][MAX_SIZE];
bool visited[MAX_SIZE][MAX_SIZE];
int dist[MAX_SIZE][MAX_SIZE];
int dy[] = {0, 0, 1, -1};
int dx[] = {1, -1, 0, 0} ;
queue<pair<int, int>> q;


void BFS(int start_y, int start_x){

    visited[start_y][start_x] = true; // 방문한 노드를 visit 처리
    q.push(make_pair(start_y, start_x)); // 해당 노드를 큐에 넣음
    dist[start_y][start_x]++;


    while (!q.empty()) {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++) { //
            int ny = y + dy[i];
            int nx = x + dx[i];

            if(ny < 0 || nx < 0 || ny > n || nx > m) continue;

            if(map[ny][nx] == 1 && !visited[ny][nx]) {
                visited[ny][nx] = true;
                dist[ny][nx] = dist[y][x] + 1;
                q.push(make_pair(ny, nx));
            }

        }
    }
}

int main(){
    cin >> n >> m;
    string str;
    for (int i = 0; i < n; i++) {
        cin >> str;
        for (int j = 0; j < m; j++) {
            map[i][j] = str[j] - '0';
        }
    }

    BFS(0, 0);

    cout << dist[n-1][m-1];
}