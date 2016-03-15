#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int w,m,n;
    while(cin>>w>>m>>n)
    {
        int z;
        int h;
        if(m%w!=0&&n%w!=0)
        {
            z=abs(m/w-n/w);
            if((m/w)%2==(n/w)%2)
            {
                h=abs((m%w)-(n%w));
            }
            else
            {
                h=abs((m%w)-((w+1)-(n%w)));
            }
        }
        else if(m%w==0&&n%w==0)
        {
            z=abs(m/w-n/w);
            if((m/w)%2==(n/w)%2)
            {
                h=0;
            }
            else
            {
                h=w-1;
            }
        }
        else
        {
            if(m%w==0)
            {
                z=abs(((m/w)-1)-(n/w));
                if(((m/w)-1)%2==(n/w)%2)
                {
                    h=(n%w);
                }
                else
                {
                    h=(n%w)-1;
                }
            }
            else
            {
                z=abs(((n/w)-1)-(m/w));
                if((n/w-1)%2==(m/w)%2)
                {
                    h=(m%w);
                }
                else
                {
                    h=(m%w)-1;
                }
            }
        }
        cout << z <<" "<<h<<" "<<z+h<<endl;
    }
    return 0;
}
