#include<bits/stdc++.h>
#define arr_max 52

using namespace std;

int arr[arr_max][arr_max],visited[arr_max][arr_max];
int dx[]={-1,0,1,0},dy[]={0,1,0,-1};
int x,y,N,M,K,r,sy,sx,ret;

void dfs(pair<int,int> start){
	visited[start.second][start.first]=1;
	
	for(int i=0;i<4;i++){
		int nx=start.first+dx[i],ny=start.second+dy[i];
		
		if(nx<0||ny<0||ny>=N||nx>=M||arr[ny][nx]==0)continue;
		if(visited[ny][nx])continue;
		
		dfs({nx,ny});
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	
	cin>>r;
	
	for(int i=0;i<r;i++){
		memset(arr, 0, sizeof(arr));
        memset(visited, 0, sizeof(visited));
        
		cin>>M>>N>>K;
		ret=0;
		for(int j=0;j<K;j++){
			cin>>sx>>sy;
			
			arr[sy][sx]=1;
		}
		
		for(int i=0;i<N;i++){
			for(int j=0;j<M;j++)
				if(arr[i][j]==1&&visited[i][j]==0)
				{
					dfs({j,i});
					for(int y=0;y<N;y++)
					{
						for(int x=0;x<M;x++)
							cout<<visited[y][x];
						
						cout<<"\n";
					}
					ret++;
				}
		}
		
		cout<<ret<<"\n";
	}
	return 0;
}
