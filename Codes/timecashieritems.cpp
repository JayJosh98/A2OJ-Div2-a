#include<iostream>
#include<algorithm>
#include<numeric>
using namespace std;
int main()
{
    int cashier;
    cin>>cashier;    
    int people[cashier];
    
    for(int i=0;i<cashier;i++)
        cin>>people[i];
    int all=accumulate(people,people+cashier,all);
    int time[cashier],item[all];

    for(int i=0;i<cashier;i++)
    {
        int adder=0;
        for(int j=0;j<people[i];j++)
        {
            cin>>item[i];
            adder+=item[i]*5;
        }
        adder+=people[i]*15;
        time[i]=adder;
    }
    sort(time,time+cashier);
    cout<<time[0];
    return 0;
}