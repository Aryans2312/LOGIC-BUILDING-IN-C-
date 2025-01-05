//now we will print the same pattern in pattern 2 but the number will be in reverse order

#include<iostream>
using namespace std;

int main()
{
    int n ,m ;
    cout<<"Enter the no of rows and columns";
    cin>>n>>m;
    for (int i = n; i >0; i--)
    {
        for (int j = 1 ; j <= m; j++)
        {
            cout<<i;
        }
        cout<<endl;
        
    }
    return 0;
}
