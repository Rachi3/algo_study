#include<bits/stdc++.h>
using namespace std;

int main(){
	//���ڿ� �Է¹ް�
	string s,rS;
	
	cin>>rS;
	
	s=rS;
	
	reverse(rS.begin(),rS.end());
	
	
	if(s==rS)
		cout<<1;
	else
		cout<<0;
	//reverse �ؼ� ������ Ȯ�� 
	return 0;
}
