// now we will make a rectangle of numbers
// if we print value of i we will get other pattern
//if we print value of j we will get other pattern

#include<iostream>
using namespace std;

int main()
{
    int n ,m ;
    cout<<"Enter the no of rows and columns";
    cin>>n>>m;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout<<i;
        }
        cout<<endl;
        
    }
    return 0;
}