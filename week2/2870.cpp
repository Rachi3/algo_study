#include<bits/stdc++.h>

using namespace std;

int N;
string str;

vector<string> vec;

bool compare(const string& a, const string& b) {
    // 길이가 다르면 짧은 문자열이 먼저 오도록 정렬
    if (a.length() != b.length()) {
        return a.length() < b.length();
    }
    // 길이가 같으면 사전순으로 정렬
    return a < b;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	
	cin>>N;
	
	for(int i=0;i<N;i++){
		cin>>str;
		
		string tmp;
		for(int i=0;i<str.length();i++){
			if(str[i]<'a')
			{
				tmp.push_back(str[i]);
				//cout<<c<<" : "<<tmp<<"\n";
			}
			else if(!tmp.empty())
			{
				//cout<<str[i]<<" : "<<tmp<<"\n";
				while(*(tmp.begin())=='0'&&tmp.length()>1)
					tmp.erase(tmp.begin());
					
				vec.push_back(tmp);
				tmp.clear();
			}			
		}
		
		if(!tmp.empty())
			{
				//cout<<str[i]<<" : "<<tmp<<"\n";
				
				while(*(tmp.begin())=='0'&&tmp.length()>1)
					tmp.erase(tmp.begin());
				
				vec.push_back(tmp);
				tmp.clear();
			}
		
	} 
	
	sort(vec.begin(),vec.end(),compare);
	for(auto it:vec){
			cout<<it<<"\n";
		}
	//1. N입력받고
	//2. N만큼 문자열 입력받기
	//3. 각 문자열 입력받으면 또다른 문자열에 for문으로 숫자일경우에만 push_back하기 
	//4. 숫자가 끝나면 s초기화 하고 숫자 벡터에다가 atoi로 push_back 
	return 0;
}
