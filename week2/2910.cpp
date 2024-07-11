#include <bits/stdc++.h>
using namespace std;  
typedef long long ll;
const ll INF = 1e18;   
int n, c,tmp;
vector<pair<int, int>> v; 
map<int, int> mp, mp_first; 
bool cmp(pair<int,int> a, pair<int, int> b){
		
	if(a.first==b.first)
		return mp_first[a.second]<mp_first[b.second];
		
	return a.first>b.first;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n >> c; 
	//�Է¹ް� 2�� ���� 1. �켱���� 2. Ƚ��
	//������ Ƚ���� ���� vector�� ����
	// ���� ������ Ƚ����� ���� Ƚ���� ���ٸ� �켱������(cmp)
	 
	for(int i=0;i<n;i++){
		cin>>tmp;
		mp[tmp]++;
		
		if(mp_first[tmp] == 0) mp_first[tmp] = i + 1; 
	} 
	
	for(auto it:mp){
		v.push_back({it.second,it.first});
	}
	
	sort(v.begin(),v.end(),cmp);

	for(pair<int,int>p : v){
		for(int i=0;i<p.first;i++)
			cout<<p.second<<" ";
	}
	return 0;
}

