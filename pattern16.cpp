#include<iostream>
using namespace std;
int main()
{
    int rows;
    cout<<"Enter the no of rows";
    cin>>rows;
    char ch = 65;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<ch;
            ch = ch+1;
        }
       
        cout<<endl;
    }
    
    return 0;
}