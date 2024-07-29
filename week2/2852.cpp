#include<bits/stdc++.h>

using namespace std;

int N;

int team,aScore,bScore;
int aTime,bTime;

string s,prevTime;

int sum(int&sum,int p);
int changeStrToInt(string str){
	return atoi(str.substr(0, 2).c_str()) * 60 + atoi(str.substr(3, 2).c_str());
}
string print(int a){ 
    string d = "00" + to_string(a / 60); 
    string e = "00" + to_string(a % 60); 
    return d.substr(d.size() - 2, 2) + ":" + e.substr(e.size() - 2, 2); 
}

int main(){
	
	cin>>N;
	
	
	for(int i=0;i<N;i++){
		//1.점수를 입력받을 것
		//누가 점수를 냇고 현재 어떤게 더 큰지 비교해야함 
		cin>>team>>s;
		

		//점수가 입력받아지면 그당시 누가 이기고 있냐를 고민한후 
		//이기고 있던팀에 현재까지 시간 더해주고 
		 
		if(aScore>bScore){
			aTime+=(changeStrToInt(s)-changeStrToInt(prevTime));
		}
		else if(bScore>aScore){
			bTime+=(changeStrToInt(s)-changeStrToInt(prevTime));
		}
		
		team==1?aScore++:bScore++;
		prevTime=s;
	}	
	
	if(aScore>bScore){
		aTime+=changeStrToInt("48:00")-changeStrToInt(prevTime);
	}else if(aScore<bScore){
		bTime+=changeStrToInt("48:00")-changeStrToInt(prevTime);
	}
	
	cout<<print(aTime)<<"\n";
	cout<<print(bTime)<<"\n";
	
	return 0;
}
