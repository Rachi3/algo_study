#include<bits/stdc++.h>
using namespace std;
string str;

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
