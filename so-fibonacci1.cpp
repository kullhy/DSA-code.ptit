#include <bits/stdc++.h>

using namespace std;

long long fibo(int n) {
   if (n < 2) {
        return n;
    }
   return fibo(n-1) + fibo(n-2);
   
long long fibo_array(int n) {
   vector<long long> f;
   f.push_back(0);
   f.push_back(1);
   for (int i = 2; i <= n; i++) {
       long long next_number = f[i - 1] + f[i - 2];
       f.push_back(next_number);
   }
   return f[n];
}

long long fib(int n)
{
    if (n < 2)
        return n;
                   0, b = 1, c;
                  2; i <= n; i++) {
    long long a =
    for (int i
        C = a + b;
        a = b;
        b = c;
    }
    return c;
                        
                
}
int main(){
	cout<<fib(40);
}
