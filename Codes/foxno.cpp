#include<iostream>
#include<algorithm>
#include<numeric>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++)            
        cin>>nums[i];
    sort(nums,nums+n,greater<int>());           //get array and sort in descending      

    int min=0;
    while(nums[0]>=min)                              
    {
        bool allnotequal=false;
        for(int i=0;i<n-1;i++)                              //subtraction operation on whole array
        {
            int j=1;
            bool operate=true;
            for(j;nums[i]==nums[i+j];j++)
            {
                if(i+j==n-1 && !allnotequal)                                    //if all nums are same
                {
                    sum=accumulate(nums,nums+n,sum);                    
                    cout<<sum;
                    return 0;
                }
                else if(allnotequal && i+j==n-1)                    //if only LAST elements are same
                {
                    operate=false;
                    break;
                }
                else                                            //if some nums are same, update j
                    continue;
            }
            if(operate)
            {
                nums[i]=nums[i]-nums[i+j];                      //and when different no is found, subtract there
                allnotequal=true;
            }
        }
        sort(nums,nums+n,greater<int>());           
        min=nums[n-1];
    }
    sum=accumulate(nums,nums+n,sum);                
    cout<<sum;
    return 0;
}