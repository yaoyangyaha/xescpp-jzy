#include <cstring>
#include <iostream>
#include <queue>
using namespace std;

const int MAX_N = 128;
int map_[MAX_N][MAX_N], dis[MAX_N][MAX_N], ans = 0;
int dx[] = {0, -1, 0, 1, 1, -1, -1, 1};
int dy[] = {-1, 0, 1, 0, 1, 1, -1, -1};
int X, Y, Mx, My;

struct Point {
    int x, y;
};

void bfs(int sx, int sy) {
    queue<Point> q;
    q.push({sx, sy});
    dis[sx][sy] = 0;
    
    while (!q.empty()) {
        Point cur = q.front();
        q.pop();
        
        ans = max(ans, dis[cur.x][cur.y]);
        
        for (int i = 0; i < 8; i++) {
            int nx = cur.x + dx[i];
            int ny = cur.y + dy[i];
            
            if (nx < 1 || nx > X || ny < 1 || ny > Y || map_[nx][ny] == 1 || dis[nx][ny] != -1) {
                continue;
            }
            
            dis[nx][ny] = dis[cur.x][cur.y] + 1;
            q.push({nx, ny});
        }
    }
}

int main() {
    cin >> X >> Y >> Mx >> My;
    
    memset(dis, -1, sizeof(dis));
    
    for (int i = 1; i <= X; i++) {
        string s;
        cin >> s;
        for (int j = 1; j <= Y; j++) {
            if (s[j-1] == '*') {
                map_[i][j] = 1;  
            }
        }
    }
    
    bfs(Mx, My);
    
    cout << ans << endl;
    return 0;
}
