#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string line;
    cin>>line;
    int size=line.length()/2+1;
    int nums[size],j=0;
    for(int i=0;i<line.length();i+=2)
    {
        nums[j]=line[i]-48;         //string to int value
        j++;
    }
    sort(nums,nums+size);
    for(int i=0;i<size;i++)
    {
        if(i==size-1)
        {
            cout<<nums[i];
            return 0;
        }
        cout<<nums[i]<<"+";
    }
    return 0;
}