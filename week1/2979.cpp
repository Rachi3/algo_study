#include<bits/stdc++.h>
using namespace std;


// �迭 100���� �޾Ƽ� ������ �� �ð��� ++�ϸ� ��ġ�� ������ �ڵ����� ����
int arr[105],a[4],sum;

int main(){
	cin>>a[1]>>a[2]>>a[3];
	
	int s,e,mS=101,mE=-1;
	
	cin>>s>>e;
	mS=s<mS?s:mS;
	mE=e>mE?e:mE;
	
	for(int i=s;i<e;i++)
		arr[i]++;
		
	cin>>s>>e;
	mS=s<mS?s:mS;
	mE=e>mE?e:mE;
	
	for(int i=s;i<e;i++)
		arr[i]++;
		
	cin>>s>>e;
	mS=s<mS?s:mS;
	mE=e>mE?e:mE;
	
	for(int i=s;i<e;i++)
		arr[i]++;
	
	
	for(int i=mS;i<mE;i++)
		{
			sum+=arr[i]*a[arr[i]];
			cout<<arr[i]<<" : "<<a[arr[i]]<<" : "<<sum<<"\n";
			
			
		}
		
	cout<<sum;
	return 0;
} 
