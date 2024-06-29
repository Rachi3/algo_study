#include<bits/stdc++.h>

using namespace std;

map<string,int> mp;
string arr[100005];
int n,m;
string tmp;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	cin>>n>>m;
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i+1];
		
		mp.insert({arr[i+1],i+1});
		
	}
	
	for(int i=0;i<m;i++)
	{
		cin>>tmp;
		n=atoi(tmp.c_str());
		if(n)
			cout<<arr[n]<<"\n";
		else
			cout<<mp[tmp]<<"\n";	
	}
	return 0;
}
