#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;
int main()
{
vector<vector<char> > Table;
int row;
int column;
char star;
star = '*';
cout<<"How many rows would you like your matrix to have?"<<endl;
cin>>row;
cout<<"And how many columns would you like to have?"<<endl;
cin>>column;
if(row>0 && column>0)
    {
    Table.resize(row);
    for(int i=0; i<Table.size(); i++)
        {
         Table[i].resize(column);
            for(int j=0; j<Table[i].size(); j++)
            {
                cout<<star;
            }       
         cout<< endl;
        }   
    }
else
return 0;
}
