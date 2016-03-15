#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a[12]={0,1,2,3,4,5,6,7,8,9};
    do{
        if(a[0]!=0&&a[4]!=0)
        {
            if((a[0]+a[4])*1000+(a[1]+a[5])*100+(a[2]+a[6])*10+a[3]+a[1]==(a[4]*10000+a[5]*1000+a[2]*100+a[1]*10+a[7]))
            {
                cout<<a[4]<<" "<<a[5]<<" "<<a[6]<<" "<<a[1]<<" "<<endl;
            }
        }
    }while(next_permutation(a,a+10));
    //cout << "Hello world!" << endl;
    return 0;
}
