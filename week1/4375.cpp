#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	
	int n,cnt=0;
	ll tmp=1;
	
	while(cin>>n){
		tmp=1,cnt=1;
		while(tmp%n!=0){
			cnt++;
			tmp=1+tmp*10;
			tmp=tmp%n;
		}
		cout<<cnt<<'\n';
	}
	return 0;
}
