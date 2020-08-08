#include<iostream>
#include<string>
using namespace std;
int main()
{
    int no,subs,successful=0;
    cin>>no>>subs;
    int student_matrix[no][subs];
    string s;
    for(int row=0;row<no;row++)                           //getting student-marks matrix
    {
        cin>>s;    
        for(int col=0;col<subs;col++)
            student_matrix[row][col]=s[col]-48;
    }

    bool flag[no]={false};
    for(int col=0;col<subs;col++)
    {
        int best=0;
        int worst=10;
        for(int row=0;row<no;row++)
        {
            best=max(best,student_matrix[row][col]);          //getting best marks among students in one sub
            worst=min(worst,student_matrix[row][col]);
        }
        //cout<<"<"<<best<<","<<worst<<"> ";
        bool contains_lesser=false;
        for(int row=0;row<no;row++)
            if(student_matrix[row][col] < best)               //check if others have lesser marks
            {
                contains_lesser=true;
                break;
            }

        for(int row=0;row<no;row++)
            if(student_matrix[row][col]==best && contains_lesser)   //if others have lesser marks and my marks are best
                flag[row]=true;                                     //flag student as successful
            else if(best==worst)                                    //or if all have same marks
                flag[row]=true;                                     //flag successful
    }
    for(int i=0;i<no;i++)
        if(flag[i])
            successful++;
    cout<<successful;
    return 0;
}