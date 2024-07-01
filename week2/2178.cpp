#include<bits/stdc++.h>
using namespace std;


int N,M,x,y;
int arr[104][104],visited[104][104],dy[]={0,1,0,-1},dx[]={-1,0,1,0};

string s;

int main(){

	
	cin>>N>>M;
	
	for(int sy=0;sy<N;sy++){
		cin>>s;
		for(int sx=0;sx<M;sx++){
			arr[sy][sx]=s[sx]-'0'; 
		}
	}
	

	queue<pair<int,int>> q;
	
	q.push({0,0});
	visited[0][0]=1;
	
	while(q.size()){
		tie(x,y)=q.front();q.pop();
		
		for(int i=0;i<4;i++){
			int ny=y+dy[i],nx=x+dx[i];
			
			if(ny<0||nx<0||nx>=M||ny>=N||!arr[ny][nx])continue;
			if(visited[ny][nx])continue;
			
			visited[ny][nx]=visited[y][x]+1;
			q.push({nx,ny});
			
		}
	}
	
	cout<<visited[N-1][M-1];
	return 0;
}
