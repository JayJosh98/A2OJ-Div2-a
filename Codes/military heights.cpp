//A2OJ MILITARY

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int no;
    cin>>no;

    int heights[no];                        //get array
    for(int i=0;i<no;i++)
    {
        cin>>heights[i];
    }   

    int sortedHeights[no];                  //duplicate array, sort it, and get smallest and largest elements
    for(int i=0;i<no;i++)
        sortedHeights[i]=heights[i];
    sort(sortedHeights,sortedHeights+no);   
    int smallest=sortedHeights[0];
    int largest=sortedHeights[no-1];
    int s_index,l_index;

    for(int i=0;i<no;i++)                       //get index of smallest int
        if(heights[i]==smallest)
            s_index=i;

    for(int i=(no-1);i>=0;i--)                  //get index of largest int
        if(heights[i]==largest)
            l_index=i;
    
    if(s_index<l_index)
    {
        l_index-=1;
    }

    int s_diff= (no-1) - s_index;
    int l_diff= l_index;
    int time= l_diff + s_diff;

    cout<<time;
    return 0;
}