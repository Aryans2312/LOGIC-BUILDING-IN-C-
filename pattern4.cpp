// now we will print the same pattern as in pattern 3 but the number will be in reverse order

#include<iostream>
using namespace std;

int main()
{
    int n ,m ;
    cout<<"Enter the no of rows and columns";
    cin>>n>>m;
    for (int i = 1; i <=n; i++)
    {
        for (int j = m; j > 0; j--)
        {
            cout<<j;
        }
        cout<<endl;
        
    }
    return 0;
}