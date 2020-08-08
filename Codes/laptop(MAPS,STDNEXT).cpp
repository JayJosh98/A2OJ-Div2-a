//A2OJ laptops

#include<iostream>
#include<map>
using namespace std;
int main()
{
    int n,price,quality;
    cin>>n;
    map<int,int> price_quality;                                 //key:value pairs
    for(int i=0;i<n;i++)
    {
        cin>>price>>quality;
        price_quality.insert(pair<int,int>(price,quality));         //used maps here because they are auto sorted
    }
    map<int,int>::iterator iter, iternext;
    for(iter=price_quality.begin();iter!=price_quality.end();iter++)
    {
        iternext=std::next(iter,1);                                              //points to +1 memory location from current
        if(iter->first < iternext->first  &&  iter->second > iternext->second)      //"first"==key and "second"==value
        {
            cout<<"Happy Alex";
            return 0;
        }
    }
    cout<<"Poor Alex";
    return 0;
}