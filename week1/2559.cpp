#include<bits/stdc++.h>
using namespace std;

int n,a;

int main(){
	int tmp,sum=0,comp=0;
	
	cin>>n>>a;
	
	int arr[a];
	
	for(int i=0;i<a;i++)
	{
		cin>>arr[i];
		sum+=arr[i];
	}
	
	
	for(int i=a;i<n;i++)
	{
		cin>>tmp;
				
		if(tmp>arr[i%a]){
			sum=sum-arr[i%a]+tmp;
		}
		arr[i%a]=tmp;
		
	}
		
	
	cout<<sum;
	return 0;
}
