#include <bits/stdc++.h>
using namespace std;

int n=5,r=3;
void print(vector<int> b){
	for(auto i:b)cout<<i<<" ";
	
	cout<<"\n";
}
void combi(int start,vector<int> b){
	//���ϴ� ��ŭ ������ ��°� return
	if(b.size()==r)
	{
		print(b);
		return;
	}
	//���ϴ� ��ŭ ���� ���ϸ� ���Ϳ� �ϳ��� �߰����ְ� ���
	//�̶� �ڽ�+1~�ִ밪 ������ �߰�
	
	
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

