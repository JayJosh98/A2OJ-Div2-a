//A2OJ BEAUTIFUL MATRIX

#include<iostream>

using namespace std;

int main()
{
    int mat[5][5];
    int xpos, ypos, steps=0;
    for(int row=0;row<5;row++)                  //get matrix
    {
        for(int col=0;col<5;col++)
        {
            cin>>mat[row][col];
            if(mat[row][col]==1)
            {
                xpos=row;                                            //getting position of 1 from given matrix
                ypos=col;
            }
        }
    }

    while(xpos<2)
    {
        xpos++;
        steps++;
    }
    while(xpos>2)
    {
        xpos--;
        steps++;
    }
    while(ypos<2)
    {
        ypos++;
        steps++;
    }
    while(ypos>2)
    {
        ypos--;
        steps++;
    }

    cout<<steps;
    return 0;
}