//A2OJ INTERSECTION POINT

#include<iostream>
using namespace std;

int main()
{
    int row,col;
    cin>>row>>col;

    int intersections=row*col;
    int count=0;
    
    if(row==col)                            //for square matrix
    {
        while(row>0)
        {
            row--;
            count++;
        }
        if(count%2==0)
        {
            cout<<"Malvika";
            return 0;
        }
        else
        {
            cout<<"Akshat";
            return 0;
        }
    }
    else if(row==1 || col==1)
    {
        cout<<"Akshat";
        return 0;
    }
    else                                    //for row!=col
    {
        if(intersections%2==0)
        {
            int odd,eve;
            if(row%2!=0 && col%2==0)
            {
                odd=row;
                eve=col;
            }
            else if(row%2==0 && col%2!=0)
            {
                eve=row;
                odd=col;
            }
            else
            {
                cout<<"Malvika";
                return 0;
            }
            if(odd>eve)
            {
                cout<<"Malvika";
                return 0;
            }
            else
            {
                cout<<"Akshat";
                return 0;
            }
        }
        else
        {
            cout<<"Akshat";
            return 0;
        }
    }
}