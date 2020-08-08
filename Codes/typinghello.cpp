//A2OJ CHAT ROOM

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    string finalstring, verify="hello";

    std::string::iterator iter;
    bool hflag=false;
    bool eflag=false;
    bool l1flag=false;
    bool l2flag=false;
    bool oflag=false;
    for(iter= s.begin(); iter!=s.end(); iter++)
    {
        char c=*iter;

        if(c=='h' && !hflag)
        {
            finalstring.push_back('h');
            hflag=true;
            continue;
        }
        if(hflag)
        {
            if(c=='e' && !eflag)
            {
                finalstring.push_back('e');
                eflag=true;
                continue;
            }
            if(eflag)
            {
                if(c=='l' && !l1flag)
                {
                    finalstring.push_back('l');
                    l1flag=true;
                    continue;
                }
                if(l1flag)
                {
                    if(c=='l' && !l2flag)
                    {
                        finalstring.push_back('l');
                        l2flag=true;
                        continue;
                    }
                    if(l2flag)
                    {
                        if(c=='o' && !oflag)
                        {
                            finalstring.push_back('o');
                            oflag=true;
                            break;
                        }
                    }
                }
            }
        }
    }
    size_t findsub= finalstring.find(verify);
    findsub == string::npos ? cout<<"\nNO" : cout<<"\nYES";
    return 0;
}