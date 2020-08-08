#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int filter,devices,socket,count=0;
    cin>>filter>>devices>>socket;
    int socket_per_filter[filter];
    for(int i=0;i<filter;i++)
        cin>>socket_per_filter[i];
    sort(socket_per_filter,socket_per_filter+filter,greater<int>());
    if(devices<=socket)
    {
        cout<<0;
        return 0;
    }
    int outputs=socket;
    for(int i=0;i<filter;i++)
    {
        count++;
        outputs+=socket_per_filter[i]-1;
        if(outputs>=devices)
        {
            cout<<count;
            return 0;
        }
        else if(outputs<devices && i==filter-1)
        {
            cout<<-1;
            return 0;
        }
    }
}