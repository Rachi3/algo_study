#include<bits/stdc++.h>

using namespace std;

int N;
string str;

vector<string> vec;

bool compare(const string& a, const string& b) {
    // ���̰� �ٸ��� ª�� ���ڿ��� ���� ������ ����
    if (a.length() != b.length()) {
        return a.length() < b.length();
    }
    // ���̰� ������ ���������� ����
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
	//1. N�Է¹ް�
	//2. N��ŭ ���ڿ� �Է¹ޱ�
	//3. �� ���ڿ� �Է¹����� �Ǵٸ� ���ڿ��� for������ �����ϰ�쿡�� push_back�ϱ� 
	//4. ���ڰ� ������ s�ʱ�ȭ �ϰ� ���� ���Ϳ��ٰ� atoi�� push_back 
	return 0;
}
