//A2OJ dubstep remove"wub"

#include<iostream>  
#include<string>
using namespace std;

int main()
{
    string song;
    getline(cin,song);

    string target="WUB";
    string change=" ";

    string finalsong, intermediatesong=song;
    int pos;
    while((pos=intermediatesong.find(target))!=-1)              //REPLACES WUB TO A SINGLE SPACE
        intermediatesong.replace(pos,3,change);

    int i=0;
    for(i;i<intermediatesong.size();i++)                        //REMOVES SPACES FROM HEAD
    {
        if(intermediatesong[i]==' ')
            continue;
        else
            break;
    }
    for(i;i<intermediatesong.size();i++)
    {
        if(intermediatesong[i]==' ' && intermediatesong[i+1]==' ')          //REMOVES EXTRA SPACES FROM IN BW
            continue;
        else if(intermediatesong[i]==' ' && intermediatesong[i+1]=='\0')        //REMOVES SPACES FROM THE END
            continue;
        else
            finalsong.push_back(intermediatesong[i]);                   //GENERATES FINAL OUTPUT STRING
    }
    cout<<finalsong;
    return 0;
}