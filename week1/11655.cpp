#include<bits/stdc++.h>
using namespace std;
string str;

int main(){
	//1. 문자열 입력받기
	//2. 입력받은 문자열을 쪼개서 알파벳인지 아닌지 확인
	//3. +13/"A" +13/"a" 해서 저장
	// 되돌릴때는 똑같이
	
	
	getline(cin,str);

	for(char c:str){
		if(c>='a'&&c<='z')
			cout<<char((c-'a'+13)%26+'a');
		else if(c>='A'&&c<='Z')
			cout<<char((c-'A'+13)%26+'A');
		else cout<<c;
	}
	return 0;
}
