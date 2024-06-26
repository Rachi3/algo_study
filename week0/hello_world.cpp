#include <bits/stdc++.h>
using namespace std;

int n=5,r=3;
void print(vector<int> b){
	for(auto i:b)cout<<i<<" ";
	
	cout<<"\n";
}
void combi(int start,vector<int> b){
	//원하는 만큼 뽑을시 출력과 return
	if(b.size()==r)
	{
		print(b);
		return;
	}
	//원하는 만큼 뽑지 못하면 벡터에 하나씩 추가해주고 재귀
	//이때 자신+1~최대값 까지만 추가
	
	
	for(int i=start+1;i<n;i++)
	{
		b.push_back(i);
		combi(i,b);
		b.pop_back();
	} 
	
	return ;
}

int main(){
	vector<int>vec;
	combi(-1,vec);
	
	return 0;
}

