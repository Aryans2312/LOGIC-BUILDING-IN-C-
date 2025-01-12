#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the no of rows";
    cin>>n;
    int s = n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout<<" ";  
        }
        for (int j = s; j > 0; j--)
        {
            cout<<"*";
        }
        s--;
        cout<<endl;
    }
    
    return 0;
}