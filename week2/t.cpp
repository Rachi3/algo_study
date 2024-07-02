#include<bits/stdc++.h>
#define max_arr 68

using namespace std;
queue<string> q;
 
int N;
int arr[max_arr][max_arr];
int dx[3],dy[3],f;

string s,compressed;

int dfs(int sx,int ex,int sy,int ey){
	int set=arr[sy][sx];
	
	for(int ny=sy;ny<ey;ny++){
		for(int nx=sx;nx<ex;nx++)
			if(arr[ny][nx]!=set)
				return -1;
	}
	
	return set;
}

void go(int sx, int ex, int sy, int ey) {
    if (sx >= ex || sy >= ey) return; // 범위를 벗어나면 종료

    int result = dfs(sx, ex, sy, ey);
    if (result != -1) { // 모든 요소가 같은 경우
        compressed += to_string(result);
    } else { // 다른 경우
        compressed += "(";
        int mx = (sx + ex) / 2;
        int my = (sy + ey) / 2;
        go(sx, mx, sy, my); // 좌상 사분면
        go(mx, ex, sy, my); // 우상 사분면
        go(sx, mx, my, ey); // 좌하 사분면
        go(mx, ex, my, ey); // 우하 사분면
        compressed += ")";
    }
} 


int main(){
	//1.배열 입력받고
	//2.재귀적으로 처리해야함 4등분해서 상하좌우 순으로 처리
	//다 돌면서 해당 영역이 모두 1인지 0인지 혼합인지 구분
	//혼합이라면 또 쪼개서 영역 구분후 push_back()
	//재귀 시작할때 (와 재귀 끝나면 ) 쪼개기를 해야한다면 (추가  push_back()해주기
	cin>>N;

	for(int sy=0;sy<N;sy++)
	{
		cin>>s;
		for(int sx=0;sx<N;sx++)
			arr[sy][sx]=s[sx]-'0';
	}

	go(0,N,0,N);
	
	cout<<compressed;
	
	return 0;
}

