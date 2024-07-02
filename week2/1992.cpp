#include<bits/stdc++.h>
#define max_arr 68

using namespace std;
queue<string> q;
 
int N;
int arr[max_arr][max_arr];
int dx[3],dy[3],f;

string s,ret;

int dfs(int sx,int ex,int sy,int ey){
	int set=arr[sy][sx];
	
	for(int ny=sy;ny<ey;ny++){
		for(int nx=sx;nx<ex;nx++)
			if(arr[ny][nx]!=set)
				return -1;
	}
	
	return set;
}

void go(int sx,int ex,int sy,int ey){
	int dx[3] = {sx, (sx + ex) / 2, ex};
    int dy[3] = {sy, (sy + ey) / 2, ey};	
	
	ret+="(";
	
	for(int ny=0;ny<2;ny++){
		for(int nx=0;nx<2;nx++){
			//�޿��޿� �˻��ϸ鼭 ��ΰ� 1���� 0���� ������ �Ѵ� �ƴ϶�� �ٽ� ����� ȣ��
			//�ɰ��� �ϴ� �����
			f=dfs(dx[nx],dx[nx+1],dy[ny],dy[ny+1]);
			if(f==-1)
				go(dx[nx],dx[nx+1],dy[ny],dy[ny+1]); 
			else
				ret+=to_string(f);
		}
	}
	ret+=")";
} 


int main(){
	//1.�迭 �Է¹ް�
	//2.��������� ó���ؾ��� 4����ؼ� �����¿� ������ ó��
	//�� ���鼭 �ش� ������ ��� 1���� 0���� ȥ������ ����
	//ȥ���̶�� �� �ɰ��� ���� ������ push_back()
	//��� �����Ҷ� (�� ��� ������ ) �ɰ��⸦ �ؾ��Ѵٸ� (�߰�  push_back()���ֱ�
	cin>>N;

	for(int sy=0;sy<N;sy++)
	{
		cin>>s;
		for(int sx=0;sx<N;sx++)
			arr[sy][sx]=s[sx]-'0';
	}

	go(0,N,0,N);
	
	cout<<ret;
	
	return 0;
}

