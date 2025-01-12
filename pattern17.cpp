#include<iostream>
using namespace std;
int main()
{
    int rows;
    cout<<"Enter the no of rows";
    cin>>rows;
    
    for (int i = 0; i < rows; i++)
    {
        char ch = 65;
        for (int j = 0; j < i; j++)
        {
            ch = ch+i+j;
            cout<<ch;
            
        }
       
        cout<<endl;
    }
    
    return 0;
}