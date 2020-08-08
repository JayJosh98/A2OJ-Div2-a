#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int points[n];
    for(int i=0;i<n;i++)
        cin>>points[i];
    
    int maxleft=points[0];
    int maxright;
    for(int i=0;i<n;i++)
    {
        if(points[i+1]<=points[i])
        {
            maxright=points[i];
            break;
        }
    }
    int left=maxleft;
    int right=maxright;
    for(int i=0;i<n;i++)
    {
        bool lflag(false), rflag(false), turn(false);
        if(points[i]>=maxleft && points[i]<=maxright)
        {
            if(i%2==0)
                lflag=true;
            else
                rflag=true;

            if(points[i]<=right || points[i]>=left)
            {
                if(lflag)
                    left=points[i];
                else if(rflag)
                    right=points[i];
            }
            else
            {
                cout<<"yes";
                return 0;
            }
        else
        {
            cout<<"yes";
            return 0;
        }
    }
    cout<<"no";
    return 0;
}