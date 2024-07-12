#include<bits/stdc++.h>
using namespace std;

int flag=0,ret;

int main(){
	int N;

	cin>>N;
	
	for(int i=0;i<N;i++)
	{
		ret=flag=0;
		
		string s;
		
		cin>>s;
		
		for(char c:s){
			if(c=='('){
				ret++;
			}else if(c==')')
				ret--;
			
			if(ret<0){
				flag=1;
			}
		}
		
		if(ret!=0||flag)
			cout<<"NO\n";
		else 
			cout<<"YES\n";
	}
	return 0;
}
