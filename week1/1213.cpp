#include<bits/stdc++.h>
using namespace std;

string str,s;
char ci;

int f=0;
map<char,int> mp;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	
	cin>>s;
	
	sort(s.begin(),s.end());
	
	for(char c:s){
		mp[c]++;
	}
	
	for(auto it:mp){	
		if(it.second%2==1)
		{		
			if(f==0)ci=it.first;
			f++;
		}
		
	}
	
	
	if(f>1)
		cout<<"I'm Sorry Hansoo"<<"\n";
	else{
		for(auto it:mp){
			for(int i=0;i<it.second/2;i++){
				str.push_back(it.first);
			}
		}
			
		cout<<str;
		
		if(ci)
			cout<<ci;
			
		reverse(str.begin(),str.end());
		cout<<str;
	}
	return 0;
}
