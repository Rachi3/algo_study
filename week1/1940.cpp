#include<bits/stdc++.h>
using namespace std;

int arr[100010];

int main(){
	
	int n,tmp,cnt=0;
	long long m;
	cin>>n>>m;
	
	for(int i=0;i<n;i++)
	{
		cin>>tmp;
		
		arr[tmp]++;
	}
	
	if(m<=200000){
	
	for(int i=1;i<m/2;i++){
		//cout<<i<<" "<<arr[i]<<" "<<m-i<<" "<<arr[m-i]<<"\n";
		if(arr[i]>0&&arr[m-i]>0){
			 if(i == m - i) {
                cnt += arr[i] / 2;
            } else {
                cnt += min(arr[i], arr[m - i]);
            }
		}
	}
}
	cout<<cnt;
	return 0;
}
