#include<bits/stdc++.h>

using namespace std;

int n=9,r=7,flag=0;
void print(vector<int> b){
	for(int a:b)cout<<a<<'\n';	
}

void combi(int start,vector<int> b,vector<int> v){
	
	if(flag==1)
		return;
	if(b.size()==r&&(accumulate(b.begin(),b.end(),0)==100))
	{
		print(b);
		flag=1;
		return ;
	}
	
	
	for(int i=start+1;i<n;i++)
	{
		b.push_back(v[i]);
		combi(i,b,v);
		b.pop_back();
	}
	
	return ;	
}



int main(){
	
	vector<int> v,b;
	int n,sum=0,idx;
	
	for(int i=0;i<9;i++)
	{
		cin>>n;
		v.push_back(n);
	}
		
	sort(v.begin(),v.end());
	
	// 조합으로 7개 뽑아서 해야함
	combi(-1,b,v);
	 
	
	return 0;
}
