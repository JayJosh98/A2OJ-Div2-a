#include<iostream>
using namespace std;
int main()
{
    int no,supercentral=0;
    cin>>no;
    int x[no],y[no];
    for(int i=0;i<no;i++)
        cin>>x[i]>>y[i];

    for(int i=0;i<no;i++)
    {
        bool right(false),left(false),down(false),up(false);
        for(int j=0;j<no;j++)
        {
            if(x[j]>x[i] && y[j]==y[i])
                right=true;
            if(x[j]<x[i] && y[j]==y[i])
                left=true;
            if(x[j]==x[i] && y[j]<y[i])
                down=true;
            if(x[j]==x[i] && y[j]>y[i])
                up=true;
        }
        if(right && left && up && down)
            supercentral+=1;
    }
    cout<<supercentral;
    return 0;
}