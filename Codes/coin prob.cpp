//A2OJ TWINS

#include<iostream>
#include<algorithm>
#define MAX 100
using namespace std;

int halfsum(int *array, int size)       //sums the array elements
{
    int s=0;
    for(int i=0;i<size;i++)
    {
        s+=array[i];
    }
    return s/2;
}

int checker(int *array, int midsum, int size)      //actual looper control to add output sum
{
    int count=0;
    int mycoinsum=0;
    for(int i=0; i<size; i++)
    {
        int temp=mycoinsum+array[i];
        if(temp<=midsum)
        {
            mycoinsum=temp;
            count++;
        }
        else
        {
            count++;
            return count;
        }
    }
}

int main()
{
    int no;                     //getting our array
    cin>>no;
    int array[MAX];
    for(int i=0;i<no;i++)
        cin>>array[i];
    
    int midsum= halfsum(array,no);   //get half the sum of its elements
    sort(array, array+no, greater<int>() );       //descending sort
    
    int count=checker(array, midsum, no);     //increment count by checking addition of array elements one by one
    
    cout<<count;
    return 0;
}