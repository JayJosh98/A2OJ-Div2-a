//A2OJ physicist

#include<iostream>
using namespace std;

int main()
{
    int no_of_forces;
    cin>>no_of_forces;
    int x[no_of_forces],y[no_of_forces],z[no_of_forces];

    for(int i=0;i<no_of_forces;i++)
    {
        cin>>x[i];
        cin>>y[i];
        cin>>z[i];
    }
    int xdiff=0;
    int ydiff=0; 
    int zdiff=0;
    for(int i=0;i<3;i++)
    {
        if(i==0)
        {
            for(int j=0;j<no_of_forces;j++)
            {    xdiff+=x[j];}
        }
        else if(i==1)
        {
            for(int j=0;j<no_of_forces;j++)
            {    ydiff+=y[j];}
        }
        else
        {
            for(int j=0;j<no_of_forces;j++)
            {    zdiff+=z[j];}
        }
    }
    if(xdiff==0)
    {
        if(ydiff==0)
        {
            if(zdiff==0)
            {
                cout<<"YES";
                return 0;
            }
            else
            {
                cout<<"NO";
                return 0;
            }
        }
        else
        {
            cout<<"NO";
            return 0;
        }
    }
    else
    {
        cout<<"NO";
        return 0;
    }
}