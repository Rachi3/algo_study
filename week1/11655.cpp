#include<bits/stdc++.h>
using namespace std;
string str,ret;
int f=1;
string go(){
	if(f==1)
		return str;
		
	for(char c:str){
		if(c>='a'&&c<='z'){
			ret.push_back((c+13)/'a');
		}else if(c>='A'&&c<='Z'){
			ret.push_back((c+13)/'A');
		}else ret.push_back(c);
	}
	
	f=0;
	
	return ret;
}
int main(){
	//1. ���ڿ� �Է¹ޱ�
	//2. �Է¹��� ���ڿ��� �ɰ��� ���ĺ����� �ƴ��� Ȯ��
	//3. +13/"A" +13/"a" �ؼ� ����
	// �ǵ������� �Ȱ���
	
	
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
