#include<bits/stdc++.h>

using namespace std;

int N;
int main(){
	
	cin>>N;
	
	int i=666;
	for(;;i++){
		if(to_string(i).find("666")!=string::npos)N--;
		
		if(N==0)break;
	}
	
	cout<<i;
	return 0;
}
