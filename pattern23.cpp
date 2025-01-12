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
        for (int j = s; j > 0; j--)
        {
            cout<<" ";
        }
        for (int k = 0; k < i; k++)
        {
            cout<<i;  
        }
        
        s--;
        cout<<endl;
    }
    
    return 0;
}