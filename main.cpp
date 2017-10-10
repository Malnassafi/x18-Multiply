#include<vector>
#include<iostream>

using namespace std;

int main()
{
    vector <vector <int> > multiTable; 
    
    multiTable.resize(13); 
    for(int r1=0; r1 < multiTable.size(); r1++)
        multiTable[r1].resize(13);
        cout<<"X";
    for(int fr=1; fr<12; fr++)
    {       
        cout<<" "<<fr;
    }
    cout<<endl;
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
