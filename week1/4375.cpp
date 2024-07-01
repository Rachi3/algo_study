#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;

int main(){
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);cout.tie(NULL);
	
	int n;
	ll tmp=1;
	ll arr[21];
	
	for(int i=1;i<21;i++){
		arr[i]=tmp;
		tmp=1+tmp*10;
	}
	
	while(cin>>n){
		for(int i=1;i<21;i++)
		{
			if(arr[i]%n==0)
			{
				cout<<i<<"\n";
				break;
			}
		}
	}
	
	return 0;
}
