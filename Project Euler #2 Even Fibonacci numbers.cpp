#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++)
    {
        long n;
        cin >> n;
        long int a,b,c,sum=2;
        a=1;
        b=2;
        c=0;
        while(c<=n)
        {
            c=a+b;
            if(c<=n&&c%2==0)
            {
                sum+=c;
            }
            a=b;
            b=c;
        }
        
        cout<<sum<<endl;
    }
    return 0;
}
