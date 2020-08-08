#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int points[n];
    for(int i=0;i<n;i++)
        cin>>points[i];
    for(int i=2;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(points[i]>min(points[j],points[j+1]) && points[i]<max(points[j],points[j+1]) && (points[i-1]>max(points[j],points[j+1]) || points[i-1]<min(points[j],points[j+1])))
            {
                cout<<"yes";
                return 0;
            }
        }
    }
    for(int i=2;i<n-1;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(points[i]>min(points[j],points[j+1])&& points[i]<max(points[j],points[j+1])&&(points[i+1]>max(points[j],points[j+1]) || points[i+1]<min(points[j],points[j+1])))
            {
                cout<<"yes";
                return 0;
            }
        }
    }
    cout<<"no";
    return 0;
}