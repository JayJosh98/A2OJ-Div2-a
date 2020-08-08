#include<iostream>
#include<string>
using namespace std;
int main()
{
    string g1,g2;
    getline(cin,g1);
    getline(cin,g2);
    if(g1.size()!=g2.size())
    {
        cout<<"NO";
        return 0;
    }
    for(int i=0;i<g2.size();i++)
    {
        if(g2[i]!=g1[i])
        {
            for(int j=i;j<g1.size();j++)
            {
                if(g1[j]==g2[i])
                {
                    string copy=g1;
                    char temp=copy[i];
                    copy[i]=copy[j];
                    copy[j]=temp;
                    if(copy==g2)
                    {
                        cout<<"YES";
                        return 0;
                    }
                }
                else if(j==g1.size()-1)
                {
                    cout<<"NO";
                    return 0;
                }
            }
        }
    }
    cout<<"YES";
    return 0;
}