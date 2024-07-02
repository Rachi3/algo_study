#include<bits/stdc++.h>
using namespace std;

int N,M,b,rightB,leftB,ret;
int k;



int main(){
	cin>>N>>M>>k;

	leftB=1,rightB=M;
	
	for(int i=0;i<k;i++){
		cin>>b;
		cout<<leftB<<" : "<<rightB<<" : "<<ret<<"\n";
		if(b>rightB){
			ret+=b-rightB;
			rightB=b;
			leftB=rightB-M+1;
		}
		else if(b<leftB){
			ret+=leftB-b;
			leftB=b;
			rightB=leftB+M-1;
		}
		
		cout<<leftB<<" : "<<rightB<<" : "<<ret<<"\n";
	}
	
	
	cout<<ret;
	return 0;
}
