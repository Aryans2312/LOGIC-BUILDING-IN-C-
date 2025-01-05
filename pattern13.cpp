#include<iostream>
using namespace std;
int main()
{
    int rows, columns;
    cout<<"Enter the no of rows and columns";
    cin>>rows>>columns;
    char ch = 65;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout<<ch;
        }
        ch = ch+1;
        cout<<endl;
    }
    
    return 0;
}