#include <iostream>

using namespace std;

int main()
{
    long long a=1;
    long long b=1;
    long long t=0;
    long long n=0;
    cin>>n;
    for(long long i=2;i<n;++i)
    {
        t=(a+b)%10007;
        a=b%10007;
        b=t%10007;
    }
    cout<<b%10007<<endl;
    return 0;
}
