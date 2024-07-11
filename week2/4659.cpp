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
					//cout<<"Ccnt에서 걸림"<<endl;
					break;
				}
			}else{
				Ccnt=0;
				cnt++;
				if(cnt==3){
					f=1;
					//cout<<"cnt에서 걸림"<<endl;
					break;
					
				
				}
			}
			
			if(prevC==c)
			{
				
				if((c!='o'&&c!='e'))
				{
					f=1;
					//cout<<"Count에서 걸림"<<endl;
				}
			}
			
			prevC=c;
			
			
			//1. 모음인지 아닌지
			//2. 모음이라면 f=1 로 바꾸기 자음이라면 0으로 만약에 f가 바꾸기 전에 1 또는 0이라면 ++하기
			//직전 글자 저장해서 만약 같은게 두번나옴다면 또  
		}
		if(Vcnt==0)f=1;
			//cout<<"Vcnt에서 걸림"<<endl;}
			
			if(f==1){
				cout<<"<"<<s<<"> is not acceptable.\n";
			}
			else {cout<<"<"<<s<<"> is acceptable.\n";}
	}

	return 0;
}
