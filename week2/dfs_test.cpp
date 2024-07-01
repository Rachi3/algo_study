#include<bits/stdc++.h>
using namespace std;

const int x = 104, y = 104;

int arr[y][x], ret = 0;
int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
int visited[y][x];

void dfs(int m, int n, int tx, int ty) {
    // 방문 처리
    visited[m][n] = 1;
    
    // 네 방향 탐색
    for (int i = 0; i < 4; i++) {
        int newX = n + dx[i];
        int newY = m + dy[i];
        
        // 유효한 범위 내에서만 탐색
        if (newX >= 0 && newX < tx && newY >= 0 && newY < ty) {
            if (!visited[newY][newX] && arr[newY][newX]) {
                dfs(newY, newX, tx, ty);
            }
        }
    }
}

int main() {
    int tx, ty, tmp;
    
    cin >> tx >> ty;
    
    for (int i = 0; i < ty; i++) {
        for (int j = 0; j < tx; j++) {
            cin >> tmp;
            arr[i][j] = tmp;
        }
    }
    
    // DFS 수행 전 visited 배열 출력
    for (int i = 0; i < ty; i++) {
        for (int j = 0; j < tx; j++)
            cout << visited[i][j] << " ";
        cout << "\n";
    }
    
   
    // DFS 수행 후 visited 배열 출력
    for (int i = 0; i < ty; i++) {
        for (int j = 0; j < tx; j++)
            if(!visited[i][j]&&arr[i][j]){
            	ret++;
            	dfs(i,j,tx,ty);
			}
    }
    
    cout<<ret;
    return 0;
}

