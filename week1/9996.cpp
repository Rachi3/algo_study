#include <bits/stdc++.h>
using namespace std;

int t;
int arr[101];

pair<string, string> p;

int main() {
    int n;
    string s, comp;
    
    cin >> n;
    cin >> s;
    
    t = s.find("*");
    
    p.first = s.substr(0, t);
    p.second = s.substr(t + 1);
    
    for (int i = 0; i < n; i++) {
        cin >> s;
        
        // ���ڿ��� ���̸� Ȯ���Ͽ� �񱳰� �������� üũ
        if (s.length() >= p.first.length() + p.second.length() &&
            s.substr(0, p.first.length()) == p.first &&
            s.substr(s.length() - p.second.length()) == p.second) {
            
            cout << "DA\n";
        } else {
            cout << "NE\n";
        }
    }
    
    
    return 0;
}

