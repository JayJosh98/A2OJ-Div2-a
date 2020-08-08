//A2OJ LUCKY DIVISION

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int integer;
    cin>>integer;

    vector<int> lucky={4,7};                                                    //single digit lucky
    for(int i=10; i<100; i++)
    {
        int ones=i%10;
        int tens=i/10;

        if(tens==4 || tens==7)
        {
            if(ones==4||ones==7)
                lucky.push_back(i);                                 //double digit lucky
        }
    }
    for(int i=100; i<1000; i++)
    {
        int hundreds=i/100;
        int tens=(i/10)%10;
        int ones=i%10;

        if(hundreds==4||hundreds==7)
        {
            if(tens==4||tens==7)
            {
                if(ones==4||ones==7)
                    lucky.push_back(i);                             //triple digit lucky
            }                                 
        }
    }
    
    vector<int> almostlucky;
    vector<int>:: iterator iter;
                                                                    
    for(int i=0; i<=1000; i++)                                      //code for almostlucky
    {
        for(iter=lucky.begin(); iter!=lucky.end(); iter++)
        {
            int check=*iter;

            if(i==check)
            {
                almostlucky.push_back(i*check);
            }
            if(i%check==0)
            {
                almostlucky.push_back(i);
                break;
            }
        }
    }

    //merge vectors lucky and almost lucky
    //check input integer with merged array and print result
    vector<int> finalchecker= lucky;
    finalchecker.insert(finalchecker.end(), almostlucky.begin(), almostlucky.end());
    
    int size=finalchecker.size();

    vector<int>:: iterator iter2;
    for(iter2=finalchecker.begin(); iter2!=finalchecker.end(); iter2++)
    {
        int check=*iter2;
        if(integer==check)
        {
            cout<<"YES";
            return 0;
        }
        else
        {
            if(check==finalchecker[size-1])
            {
                cout<<"NO";
                return 0;
            }
        }
    }
}