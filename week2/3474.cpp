#include<bits/stdc++.h>

typedef long long ll;
using namespace std;

int cnt;
int N;


int main(){
	int M;
	//N�Է¹ޱ�
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	//N~1 ���� ��������� ���鼭 ���ϸ� N!�ϼ�
	//10�� ������ ���ϸ� ��,10�� ����� cnt++ �׸��� 2�� ��� 5�� ��� �ϳ��� �ؼ� �ּҰ��� ++ 
	
	//���ϰ� ������ �ݺ� ���ϰ� ������ �ݺ� �ؼ��ؾ��ҵ�
	cin>>M;
	while(M--)
	{
		cin>>N;
		cnt=0;
		//�ᱹ 2�� 5�� ������ ã�°�
		//��, �־��� ���� ������ ���� ū 2�� �������� 5�� ������ ã��
		
	
		for(int j=5;j<=N;j*=5)
			cnt+=N/j;
		
		
		cout<<cnt<<"\n"; 
	}
	return 0;
}
