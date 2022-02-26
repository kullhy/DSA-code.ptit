#include<bits/stdc++.h>
using namespace std;
int a[1001],b[1001],c[1001];
int demn=0,n;
void dem(){
    int x=0; a[n]=0;
    for (int i=0;i<n; i++){x++;
       if(a[i]!=a[i+1]){
            b[demn]=a[i];
            c[demn]=x;
            demn++;x=0;
       }
    }
}
int main(){
    int t;cin>>t;
    while(t--){
    cin>>n;
    for (int i=0;i<n;i++) {cin>>a[i];}
    sort(a, a+n);
    dem();
    for (int i=0;i<demn; i++){
        for (int j=0;j<demn-1;j++) {
           if(c[j]<c[j+1]){
                swap(c[j],c[j+1]);
                swap(b[j],b[j+1]);
           }
        }
    }
for (int i=0;i<demn; i++){
for (int j=0;j<c[i];j++){
     cout<<b[i]<<" ";
     }
}
demn=0;
cout<<endl;
}
return 0;
}