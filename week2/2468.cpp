#include<bits/stdc++.h>
#define max_arr 105

using namespace std;

int arr[max_arr][max_arr],visited[max_arr][max_arr];
int N,ret,rain,maxR=-1;
int dx[]={-1,0,1,0},dy[]={0,1,0,-1};

void dfs(int x,int y){
	visited[y][x]=1;
	
	for(int i=0;i<4;i++)
	{
		int nx=x+dx[i],ny=y+dy[i];
		
		if(nx<0||ny<0||nx>=N||ny>=N||arr[ny][nx]<=rain)continue;
		if(visited[ny][nx])continue;
		
		dfs(nx,ny);
	}	
}

int main(){

	cin>>N;
	
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++)
		{
			cin>>arr[i][j];
		}
	}	
	
	for(rain=0;rain<=100;rain++){
		ret=0;
		for (int i = 0; i < N; i++) {
            fill(visited[i], visited[i] + N, 0);
        }
		//dfs로 컴포넌트 찾아서 최대값에 계속 저장하기
		
		for(int sy=0;sy<N;sy++){
			for(int sx=0;sx<N;sx++)
			{
				if(arr[sy][sx]>rain&&visited[sy][sx]==0)
				{
					dfs(sx,sy);
					ret++;
				}
			}
		} 
		
		
		
		if(ret>maxR)
			maxR=ret;
		
	}
	
	cout<<maxR;
	
	return 0;
}
