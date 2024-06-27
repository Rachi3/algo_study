//중복 셋 사용으로 다 넣고 숫자 세기?
#include<bits/stdc++.h>
using namespace std;

multiset<char> ms;

int main()
{
	int n,f=0;
	string s;
	
	cin>>n;
	getchar();
	
	/* 방법1 멀티셋에 저장후 겹치는거 카운팅
	 
	for(int i=0;i<n;i++)
	{
		cin>>s; 
		
		ms.insert(s[0]);
	}
	

	int cnt=0;
	
	char tmp=*ms.begin();
	
	for(char c:ms){
		
		if(c!=tmp)
		{
			if(cnt>=5)
			{
				cout<<tmp;
				f=1;
			}
			tmp=c;
			cnt=1;
		}else
			cnt++;
	}	
	
	if (cnt >= 5)
    {
        cout << tmp;
        f = 1;
    }
    
	if(f==0)
		cout<<"PREDAJA"; 
	*/
	
	/*방법 2 : 입력된 성의 첫글자 알파벳 배열에 ++하기
	*/
	
	 
	return 0;
 } 
