//A2OJ EVEN ODDS

#include<iostream>
using namespace std;

int main()
{
    long long limit,target_pos,mid;
    cin>>limit>>target_pos;
    (limit%2==0) ? mid=limit/2 : mid=(limit+1)/2;    
    (target_pos>mid) ? cout<<2*(target_pos-mid) : cout<<(2*target_pos)-1;
    return 0;
}