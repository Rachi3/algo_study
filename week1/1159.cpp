//�ߺ� �� ������� �� �ְ� ���� ����?
#include<bits/stdc++.h>
using namespace std;

multiset<char> ms;

int main()
{
	int n,f=0;
	string s;
	
	cin>>n;
	getchar();
	
	/* ���1 ��Ƽ�¿� ������ ��ġ�°� ī����
	 
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
	
	/*��� 2 : �Էµ� ���� ù���� ���ĺ� �迭�� ++�ϱ�
	*/
	
	 
	return 0;
 } 
