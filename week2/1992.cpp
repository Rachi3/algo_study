#include<bits/stdc++.h>
#define max_arr 68

using namespace std;
queue<string> q;
 
int N;
int arr[max_arr][max_arr];
int dx[3],dy[3],f;

string s,ret;

int dfs(int sx,int ex,int sy,int ey){
	int set=arr[sy][sx];
	
	for(int ny=sy;ny<ey;ny++){
		for(int nx=sx;nx<ex;nx++)
			if(arr[ny][nx]!=set)
				return -1;
	}
	
	return set;
}

void go(int sx,int ex,int sy,int ey){
	int dx[3] = {sx, (sx + ex) / 2, ex};
    int dy[3] = {sy, (sy + ey) / 2, ey};	
	
	ret+="(";
	
	for(int ny=0;ny<2;ny++){
		for(int nx=0;nx<2;nx++){
			//왼오왼오 검사하면서 모두가 1인지 0인지 구분후 둘다 아니라면 다시 재귀적 호출
			//쪼개야 하는 경우라면
			f=dfs(dx[nx],dx[nx+1],dy[ny],dy[ny+1]);
			if(f==-1)
				go(dx[nx],dx[nx+1],dy[ny],dy[ny+1]); 
			else
				ret+=to_string(f);
		}
	}
	ret+=")";
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
	
	cout<<ret;
	
	return 0;
}

