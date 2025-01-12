#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the numbe of rows";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout<<" ";
        }
        for (int j = i; j <= n; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}