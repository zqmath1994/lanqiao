#include <iostream>

using namespace std;
int sum(int s,int t)
{
    int temp=0;
    for(int i=s;i<=t;i++)
    {
        temp+=i;
    }
    return temp;
}
int main()
{
    for(int i=1;i<50;i++)
    {
        for(int j=i;j<50;j++)
        {
            if((sum(1,i-1)+(i*(i+1))+sum(i+2,j-1)+(j*(j+1))+sum(j+2,49))==2015)
            {
                cout<<i<<" "<<j<<endl;
            }
        }
    }
    //cout << "Hello world!" << endl;
    return 0;
}
