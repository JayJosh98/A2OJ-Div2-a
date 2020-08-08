//A2OJ cheap travel

#include<iostream>
using namespace std;

int main()
{
    int no_of_rides, valid_pass_rides, ticket_cost, pass_cost, min_cost=0;
    cin>>no_of_rides>>valid_pass_rides>>ticket_cost>>pass_cost;

    int copy=no_of_rides;
    while(copy%valid_pass_rides!=0)
        copy--;
    int remaining= no_of_rides-copy;
    
    if(ticket_cost*no_of_rides < pass_cost*(no_of_rides/valid_pass_rides))
        min_cost=ticket_cost*no_of_rides;
    else
    {
        if(valid_pass_rides>no_of_rides)
            min_cost=min(pass_cost , ticket_cost*no_of_rides);
        else
            min_cost= pass_cost*(copy/valid_pass_rides) + min(remaining*ticket_cost, pass_cost);
    }
    cout<<min_cost;
    return 0;
}