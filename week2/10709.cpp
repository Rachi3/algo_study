#include<bits/stdc++.h>
using namespace std;

int H,W;

char arr[101][101];
int iarr[101][101];

vector<pair<int,int>> vec;

int dx[]={-1,1};


int main(){
	cin>>H>>W;
	
	for(int i=0;i<H;i++){
		for(int j=0;j<W;j++)
		{
			cin>>arr[j][i];
			
			if(arr[j][i]=='c')
				vec.push_back({j,i});
	}
}

	memset(iarr, -1, sizeof(iarr));
	//for(auto it:vec)cout<<it.first<<" : "<<it.second<<"\n";
	for(auto it:vec){
		int ny=it.second,nx=it.first;
		int tmp=0;
		
		iarr[ny][nx]=0;
		
		nx=it.first,tmp=0;
		
		while(nx<W){
			iarr[ny][++nx]=++tmp;
		}
		
	}
	
	for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cout << iarr[i][j] << " ";
        }
        cout << "\n";
    }
	return 0;
}
