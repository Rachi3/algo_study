#include<bits/stdc++.h>

using namespace std;

string s;
int Vcnt,Ccnt,cnt,f,isRun=1;
char prevC;

string vowel="aeiou";

int main(){
	while(isRun){
		cin>>s;
		
		prevC='\0';
		
		Vcnt=Ccnt=cnt=f=0;
		
		if(s=="end")
			break;
			
		for(char c:s){
			if(vowel.find(c)!=string::npos){
				Vcnt++;
				
				Ccnt++;
				cnt=0;
				
				if(Ccnt==3)
				{
					f=1;
					//cout<<"Ccnt���� �ɸ�"<<endl;
					break;
				}
			}else{
				Ccnt=0;
				cnt++;
				if(cnt==3){
					f=1;
					//cout<<"cnt���� �ɸ�"<<endl;
					break;
					
				
				}
			}
			
			if(prevC==c)
			{
				
				if((c!='o'&&c!='e'))
				{
					f=1;
					//cout<<"Count���� �ɸ�"<<endl;
				}
			}
			
			prevC=c;
			
			
			//1. �������� �ƴ���
			//2. �����̶�� f=1 �� �ٲٱ� �����̶�� 0���� ���࿡ f�� �ٲٱ� ���� 1 �Ǵ� 0�̶�� ++�ϱ�
			//���� ���� �����ؼ� ���� ������ �ι����ȴٸ� ��  
		}
		if(Vcnt==0)f=1;
			//cout<<"Vcnt���� �ɸ�"<<endl;}
			
			if(f==1){
				cout<<"<"<<s<<"> is not acceptable.\n";
			}
			else {cout<<"<"<<s<<"> is acceptable.\n";}
	}

	return 0;
}
