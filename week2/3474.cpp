#include<bits/stdc++.h>

typedef long long ll;
using namespace std;

int cnt;
int N;


int main(){
	int M;
	//N입력받기
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	//N~1 까지 재귀적으로 가면서 곱하면 N!완성
	//10의 개수만 구하면 됌,10의 배수면 cnt++ 그리고 2의 배수 5의 배수 하나씩 해서 최소값도 ++ 
	
	//곱하고 나누기 반복 곱하고 나누기 반복 해서해야할듯
	cin>>M;
	while(M--)
	{
		cin>>N;
		cnt=0;
		//결국 2와 5의 개수를 찾는것
		//즉, 주어진 숫자 내에서 가장 큰 2의 제곱수와 5의 제곱수 찾기
		
	
		for(int j=5;j<=N;j*=5)
			cnt+=N/j;
		
		
		cout<<cnt<<"\n"; 
	}
	return 0;
}
