#include<bits/stdc++.h>
using namespace std;

int N,team;

pair<int,int> p;
string s,tmp,ret;
char c;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	
	cin>>N;
	
	for(int i=0;i<N;i++){
		cin>>team>>p.first>>c>>p.second;
		
		cout<<team<<" "<<p.first<<" "<<p.second<<"\n";
	}	
	return 0;
}
