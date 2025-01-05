// now we will code a simple pattern of rectangle filled with stars

#include<iostream>
using namespace std;

int main()
{
    int n , m;
    // n = rows , m = columns
    cout<<"Enter the no of rows and columns for the rectangle pattern";
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}