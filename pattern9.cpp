// we are building the same triangle in pattern7 but we will replace star with counting which will keep increasing

#include<iostream>
using namespace std;

int main()
{
    int rows;
    cout<<"Enter the no of rows";
    cin>>rows;
    int count = 0;
    for (int i = 1; i <= rows ; i++)
    {
        for(int j = 0; j < i; j++)
        {
            cout<<count<<" ";
            count = count+1;
        }
        cout<<endl;
    }
    

    return 0;
}