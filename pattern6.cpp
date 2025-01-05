// now we will print a rectangle of numbers constantly increasing

#include<iostream>
using namespace std;

int main()
{
    int rows , columns;
    cout<<"Enter the number of rows and columns";
    cin>>rows>>columns;
    int count = 1;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout<<count;
            count = count+1;
        }
        cout<<endl;
    }
    
    return 0;
}
