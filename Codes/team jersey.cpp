//A2OJ HOME-AWAY JERSEY PROB

#include<iostream>  

using namespace std;

int main()
{
    int no_of_matches;
    cin>>no_of_matches;
    int home[no_of_matches],away[no_of_matches];
    for(int i=0;i<no_of_matches;i++)
    {
        cin>>home[i];
        cin>>away[i];
    }

    int count=0;
    for(int i=0;i<no_of_matches;i++)
    {
        for(int j=0;j<no_of_matches;j++)
        {
            if(home[i]==away[j])
                count++;
        }
    }

    cout<<count;
    return 0;
}