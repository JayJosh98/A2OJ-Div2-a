#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
    int num,divisor,limit,count,n=1;
    cin>>num>>divisor>>limit;
    
    if(num<divisor)
        count=divisor-num;
    else
    {
        int m=2;
        int dcopy=divisor;
        while(dcopy<=num)
        {
            dcopy=divisor;
            dcopy*=m;
            m++;
        }
        count=dcopy-num;
    }

    vector<int> elements;
    if(count+num<=limit)
        elements.push_back(count);
    else
    {
        cout<<-1;
        return 0;
    }
    if(num>=limit)
    {
        cout<<-1;
        return 0;
    }
    int diff=limit-num;
    num=divisor*n;
    for(num; num+count<=diff; num=divisor*n)
    {
        elements.push_back(num + count);
        n++;
    }
    
    vector<int>::iterator iter;
    for(iter=elements.begin();iter!=elements.end();iter++)
    {
        if(*iter>0)
            cout<<*iter<<" ";
    }
    return 0;
}