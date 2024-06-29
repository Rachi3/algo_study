#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n,m,cnt=0;
	cin>>n>>m;
	
	int arr[n];
	
	for(int i=0;i<n;i++)cin>>arr[i];
	
	if(m>200000)
		cout<<0;
	else{
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(arr[i]+arr[j]==m)
					cnt++;
				}
		}
		
		cout<<cnt;
	}
	
	
	return 0;
}
