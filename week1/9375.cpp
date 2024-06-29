#include<bits/stdc++.h>

using namespace std;

int n,m,ret; 

map<string,int> mp;

string key,value;

vector<string> pick(int n){
	
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>m;
		ret=1;
		for(int j=0;j<m;j++)
		{
			cin>>value>>key;
			mp[key]++;	
		}
		
		for(auto p:mp){
			ret*=(p.second+1);
		}
		
		cout<<ret-1<<"\n";
		mp.clear();
	}
	

}
