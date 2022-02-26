#include<bits/stdc++.h>
using namespace std;
bool check(string s,int k){
    int dem=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1') dem++;
    }
    if(dem==k) return true;
    else return false;
}
void Try(string s,int n,int k){
    if(s.size()==n) {
        if(check(s,k))
        cout << s << '\n';
    }
    else {
        Try(s+"0",n,k);
        Try(s+"1",n,k);
    }
}

int main(){
    int t;cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        Try("",n,k);
    }
}