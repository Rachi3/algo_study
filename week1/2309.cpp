#include<bits/stdc++.h>

using namespace std;

pair<int,int> p;
int n=9,sum=0;
//2개 조합으로 뽑는 함수

void combi(const vector<int>&b){
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(sum==b[i]+b[j])
			{
				p={i,j};
				
				return;
			}
		}
	}
} 

int main()
{
	int t;
	

	
	vector<int> v;
	
	for(int i=0;i<9;i++)
	{
		cin>>t;
		v.push_back(t);
	}
	
	sort(v.begin(),v.end());
	
	sum=accumulate(v.begin(),v.end(),0)-100;
	
	combi(v);
	
	for(int i=0;i<9;i++)
	{
		if(i==p.first||i==p.second)continue;
		
		cout<<v[i]<<"\n";
	}
	
	return 0;
}
