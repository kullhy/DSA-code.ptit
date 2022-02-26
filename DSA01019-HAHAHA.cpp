#include<bits/stdc++.h>
using namespace std;
bool check(string s){
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]&&s[i]=='H') return false;
    }
    if(s[0]=='H' && s[s.size()-1]=='A') return true;
        else return false;
}
void Try(string s,int n){
    if(s.size()==n) {
        if(check(s))
        cout << s << '\n';
    }
    else {
        Try(s+'A',n);
        Try(s+'H',n);
    }
}

int main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        Try("",n);
    }
}
