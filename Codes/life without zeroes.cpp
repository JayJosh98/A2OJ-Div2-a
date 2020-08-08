#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main()
{
    int a,b,c;                                  //get ints and sum them
    cin>>a>>b;
    c=a+b;

    ostringstream a_stream,b_stream,c_stream;       //convert all 3 from int to strings
    a_stream << a;
    b_stream << b;
    c_stream << c;
    string a_str=a_stream.str();
    string b_str=b_stream.str();
    string c_str=c_stream.str();

    string _a,_b,_c;
    for(int i=0;i<a_str.length();i++)           //remove zeroes from all 3
        if(a_str[i]!='0')
            _a.push_back(a_str[i]);                  
    for(int i=0;i<b_str.length();i++)
        if(b_str[i]!='0')
            _b.push_back(b_str[i]);
    for(int i=0;i<c_str.length();i++)
        if(c_str[i]!='0')
            _c.push_back(c_str[i]);      

    int a_int,b_int,c_int;
    stringstream a_streamagain(_a),b_streamagain(_b),c_streamagain(_c);     //convert all 3 back from string to ints     
    a_streamagain >> a_int;                                   
    b_streamagain >> b_int;
    c_streamagain >> c_int;
    int c_sum =a_int + b_int;

    if(c_sum == c_int)                                   //compare first sum having zeroes removed
        cout<<"YES";                                     //with second sum having zeroes removed before addition
    else
        cout<<"NO";
    return 0;
}