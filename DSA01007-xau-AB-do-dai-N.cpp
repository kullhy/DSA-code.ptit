#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void Try(string s,int n){
    if(s.size()==n) cout << s << " ";
    else {
        Try(s+"A",n);
        Try(s+"B",n);
    }

}
int main(){
    int t;cin>>t;
    while (t--)
    {
        long long n;
        cin>>n;
        Try("",n);
        cout<<"\n";
    }
    return 0;
}
