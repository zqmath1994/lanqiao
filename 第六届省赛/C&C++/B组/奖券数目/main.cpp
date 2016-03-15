#include <iostream>
using namespace std;

int main()
{
    int count=0;
    for(int i=10000;i<=99999;i++)
    {
        if(i/10000!=4&&((i/1000)%10)!=4&&((i/100)%10)!=4&&((i/10)%10)!=4&&i%10!=4)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
