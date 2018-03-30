#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++)
    {   long int n,sum,a,b,s,c,d;
        cin >> n;
        a=(n-1)/3;
        sum=3*a*(a+1);
        b=(n-1)/5;
        sum+=5*b*(b+1);
        c=(n-1)/15;
        s=15*c*(c+1);
        d=sum-s;
        cout<<d/2<<endl;
    }
    return 0;
}
