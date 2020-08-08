//A2OJ choosing teams

#include<iostream>
using namespace std;
int main()
{
    int no,target,count=0;
    cin>>no>>target;
    int students[no];
    for(int i=0;i<no;i++)
        cin>>students[i];
    for(int i=0;i<no;i++)
        if(students[i]+target<=5)
            count++;
    cout<<count/3;
    return 0;
}