#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the numbe of rows";
    cin>>n;
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k < i; k++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}