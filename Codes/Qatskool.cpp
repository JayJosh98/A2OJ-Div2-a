#include<iostream>
using namespace std;
void swap(string a,string b)
{
    string temp=a;
    a=b;
    b=temp;
}
int main()
{
    int n,t;
    string s;
    cin>>n>>t;
    cin>>s;
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<n;j++)
        {
            while(s[j]=='B' && s[j+1]=='G')
            {
                swap(s[j],s[j+1]);
                j+=2;
            }
        }
    }
    cout<<s;
    return 0;
}