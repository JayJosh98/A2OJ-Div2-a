//A2OJ counter example

#include<iostream>
#include<algorithm>
#define ULL unsigned long long int
using namespace std;
int coprime(ULL x, ULL y)
{
    if(__gcd(x,y)==1)
        return 1;
    else
        return 0;
}
int main()
{
    ULL l_lim,r_lim,a,b,c;
    cin>>l_lim>>r_lim;
    for(a=l_lim;a<r_lim-1;a++)                      //selecting first no
        for(b=a+1;b<r_lim;b++)                      //selecting second no                         
            if(coprime(a,b))                        //if FIRST and SECOND are coprime
                for(c=b+1;c<=r_lim;c++)             //selecting third no 
                    if(coprime(b,c))                //if SECOND and THIRD are coprime                            
                        if(!coprime(a,c))           //if FIRST and THIRD are NOT coprime
                        {
                            cout<<a<<" "<<b<<" "<<c;
                            return 0;
                        }
    cout<<-1;
    return 0;
}