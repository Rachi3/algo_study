#include<bits/stdc++.h>
using namespace std;

int t;
int arr[101];

pair<string,string> p;
int main(){
	//1. ���� 100���� �Է¹ް�
	//2. �׶����� �������� arr[101]�� �޾Ƽ�
	//���ڿ� �Է� �޾����� ó���� �� ��
	
	int n;
	string s,comp;
	
	cin>>n;
	cin>>s;
	
	t=s.find("*");
	
	p.first=s.substr(0,t);
	p.second=s.substr(t+1,s.length()-1);
	
	for(int i=0;i<n;i++)
	{
		cin>>s;
		
		if(s.substr(0,t)==p.first&&s.substr(s.length() - p.second.length())==p.second){
			
			arr[i]=1;
		}
	}
	
	for(int i=0;i<n;i++)
		{
			if(arr[i])
				cout<<"DA\n";
			else
				cout<<"NE\n";
		}
	return 0;
}
