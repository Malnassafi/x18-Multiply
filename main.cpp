#include<vector>
#include<iostream>

using namespace std;

int main()
{
    vector <vector <int> > multiTable; 
    
    multiTable.resize(13); 

    for(int r=1; r < multiTable.size(); r++)
    {  
        multiTable[r].resize(13);

        for(int c=1; c < multiTable[1].size(); c++)
        {
            multiTable[r][c]=r*c;
            cout<<multiTable[r][c]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
