#include<iostream>
#include<cmath>
using namespace std;
int function(int *x, int *y)
{
    int l0=pow((x[0]-x[1]),2) + pow((y[0]-y[1]),2);
    int l1=pow((x[1]-x[2]),2) + pow((y[1]-y[2]),2);
    int l2=pow((x[2]-x[0]),2) + pow((y[2]-y[0]),2);
    int MAX=max(l0,max(l1,l2));
    return(l0+l1+l2-MAX==MAX);
}
int main()
{
    int x[3],y[3],_x[3],_y[3];
    for(int i=0;i<3;i++)
        cin>>x[i]>>y[i];
    for(int i=0;i<3;i++)
    {
        _x[i]=x[i];
        _y[i]=y[i];
    }
    if(function(x,y))
    {
        cout<<"RIGHT";
        return 0;
    }
    for(int i=0;i<3;i++)
    {
        _x[i]+=1;
        if(function(_x,_y))
        {
            cout<<"ALMOST";
            return 0;
        }
        _x[i]=x[i];
        _x[i]-=1;
        if(function(_x,_y))
        {
            cout<<"ALMOST";
            return 0;
        }
        _x[i]=x[i];
        _y[i]+=1;
        if(function(_x,_y))
        {
            cout<<"ALMOST";
            return 0;
        }
        _y[i]=y[i];
        _y[i]-=1;
        if(function(_x,_y))
        {
            cout<<"ALMOST";
            return 0;
        }
    }
    cout<<"NEITHER";
    return 0;
}