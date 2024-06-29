#include<bits/stdc++.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	
	int n,ret=0;
	string s;
	
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		stack<char> stk;
		cin>>s;
		
		for(char c:s){
			if(!stk.empty()&&stk.top()==c)
				stk.pop();
			else
				stk.push(c);
		}
		
		if(stk.empty())
			ret++;			
	}
	
	cout<<ret;
	
	return 0;
}
