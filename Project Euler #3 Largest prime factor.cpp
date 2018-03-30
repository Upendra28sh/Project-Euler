#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++)
    {
        long int n;
        cin >> n;
        long int i=2;
        long int max=2;
        while(n>1)
        {
            if(i*i>n)
            {
                max=n;
                break;
            }
            if(n%i==0)
            {   
                if(i>max)
                {
                    max=i;
                }
                while(n%i==0)
                {
                    n=n/i;
                }
            }
            i++;
        }
    cout<<max<<endl;
        
    }
    return 0;
}
