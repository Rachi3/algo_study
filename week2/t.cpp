#include<bits/stdc++.h>
#define max_arr 68

using namespace std;
queue<string> q;
 
int N;
int arr[max_arr][max_arr];
int dx[3],dy[3],f;

string s,compressed;

int dfs(int sx,int ex,int sy,int ey){
	int set=arr[sy][sx];
	
	for(int ny=sy;ny<ey;ny++){
		for(int nx=sx;nx<ex;nx++)
			if(arr[ny][nx]!=set)
				return -1;
	}
	
	return set;
}

void go(int sx, int ex, int sy, int ey) {
    if (sx >= ex || sy >= ey) return; // ������ ����� ����

    int result = dfs(sx, ex, sy, ey);
    if (result != -1) { // ��� ��Ұ� ���� ���
        compressed += to_string(result);
    } else { // �ٸ� ���
        compressed += "(";
        int mx = (sx + ex) / 2;
        int my = (sy + ey) / 2;
        go(sx, mx, sy, my); // �»� ��и�
        go(mx, ex, sy, my); // ��� ��и�
        go(sx, mx, my, ey); // ���� ��и�
        go(mx, ex, my, ey); // ���� ��и�
        compressed += ")";
    }
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
	
	cout<<compressed;
	
	return 0;
}

