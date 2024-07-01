#include<bits/stdc++.h>
using namespace std;

int N,M;

int arr[104][104],visited[104][104];

pair<int,int> p,mar;
int dx[]={-1,0,1,0},dy[]={0,1,0,-1},x,y;



int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	
	cin>>N>>M;	
	
	cin>>p.second>>p.first;
	cin>>mar.second>>mar.first;
	
	for(int y=0;y<N;y++){
		for(int x=0;x<M;x++)
			cin>>arr[y][x];
	}
	
	queue<pair<int,int>> q;
	
	q.push({p.first,p.second});
	
	visited[p.second][p.first]=1;
	
	while(q.size()){
		tie(x,y)=q.front();q.pop();
			
		for(int i=0;i<4;i++){
			int ny=y+dy[i],nx=x+dx[i];
			
			if(ny<0||ny>=N||nx<0||nx>=M||!arr[ny][nx])continue;
			
			if(visited[ny][nx])continue;
			
			q.push({nx,ny});
			visited[ny][nx]=visited[y][x]+1;
		}
	}
	
	for(int y=0;y<N;y++){
		for(int x=0;x<M;x++)
			cout<<visited[y][x]<<" ";
			
		cout<<"\n";
	}
	
	cout<<visited[mar.second][mar.first];
	return 0;
}
