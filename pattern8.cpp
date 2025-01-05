// we are building the same triangle in pattern7 but we will replace star with numbers

#include<iostream>
using namespace std;

int main()
{
    int rows;
    cout<<"Enter the no of rows";
    cin>>rows;
    for (int i = 1; i <= rows ; i++)
    {
        for(int j = 0; j < i; j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
    

    return 0;
}