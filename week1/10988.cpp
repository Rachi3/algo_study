#include<bits/stdc++.h>
using namespace std;

int main(){
	//문자열 입력받고
	string s,rS;
	
	cin>>rS;
	
	s=rS;
	
	reverse(rS.begin(),rS.end());
	
	
	if(s==rS)
		cout<<1;
	else
		cout<<0;
	//reverse 해서 같은지 확인 
	return 0;
}
