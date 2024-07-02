#include<bits/stdc++.h>
using namespace std;

#define arr_max 101

int arr[arr_max][arr_max],visited[arr_max][arr_max];
int M,N,K,ret,s,e,sum;
int dx[]={-1,0,1,0},dy[]={0,1,0,-1};
 
pair<int,int>pi[2];

vector<int>maxR;

void dfs(int x,int y){
	visited[y][x]=1;
	sum++;
	
	for(int i=0;i<4;i++){
		int ny=y+dy[i],nx=x+dx[i];
		
		if(nx<0||ny<0||nx>=M||ny>=N||arr[ny][nx]!=0)continue;
		if(visited[ny][nx])continue;
		
		dfs(nx,ny);		
	}
}
int main(){
	//직사각형 입력받아서 1로 채우기?
	//0인 부분들만 visited 하면서 dfs하면서 채우기
	//채우는 중에 숫자 세기? 
	cin>>N>>M>>K;
	
	while(K--){
		for(int i=0;i<2;i++){
			cin>>s>>e;
			pi[i]={s,e};
		}
		
		for(int sy=pi[0].second;sy<pi[1].second;sy++){
			for(int sx=pi[0].first;sx<pi[1].first;sx++){
				arr[sy][sx]=1;
			}
		}
	}
	
	for(int sy=0;sy<N;sy++){
		for(int sx=0;sx<M;sx++){
			if(arr[sy][sx]==0&&visited[sy][sx]==0){
				sum=0;
				dfs(sx,sy);
				ret++;
				
				maxR.push_back(sum);
			}
		}
	}
	
	sort(maxR.begin(),maxR.end());
	
	cout<<ret<<"\n";
	
	for(int i=0;i<ret;i++)
		cout<<maxR[i]<<" ";
	
	
	return 0;
}
