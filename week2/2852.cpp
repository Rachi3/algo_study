#include<bits/stdc++.h>
using namespace std;

//1. 1팀 2팀 득점 카운팅 첫 득점 시간 저장과 역전시간들 저장
//2. 각 시간들 마지막에 빼서 시간 구하기

int team1,team2,t,m,s,N;
char c;

vector<pair<int,int>> T1,T2;
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	
	cin>>N;
	
	for(int i=0;i<N;i++){
		cin>>t>>m>>c>>s;
		
		if(t==1){
			if(team1++==0)
				T1.push_back({m,s});
			else if(++team1==team2){
				T1.push_back({m,s});
			}
		}
		else if(t==2){
			if(team2++==0)
				T2.push_back({m,s});
			else if(++team2==team1){
				T2.push_back({m,s});
			}
		}
	}	
	
	
	for(auto it : T1){
		cout<<it.first<<":"<<it.second<<"\n";
	}
	
	
	for(auto it : T2){
		cout<<it.first<<":"<<it.second<<"\n";
	}
	return 0;
}
