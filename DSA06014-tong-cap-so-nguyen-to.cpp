#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;
bool p[1000001];
int n;
void prime_check(){
    memset(p,true,sizeof(p));

    p[0]=p[1]=false;

    for(int i = 2; i*i <= 1000000; i++){
        if(p[i]){
            for(int j = i*2; j <= 1000000; j += i)
                p[j] = false;
        }
    }
}
int main(){
    int t;
    cin >> t;
    prime_check();
    while (t--){
        cin >> n;
        if(n <= 3)  
            cout << -1 << endl;
        else{
            bool test = true;
            for(int i = 2; i <= n;i++)
                if(p[i])
                    if(p[n-i]){
                        cout << i << " " << n - i << endl;
                        test = false;
                        break;
                    }
            if(test)    
                cout << -1 << endl; 
        }
    }
    return 0;
}