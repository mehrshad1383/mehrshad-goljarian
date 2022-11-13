#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "enter 2 nubmer" << endl;
    int m,n;
    cin>>n>>m;
    int a[n][m],b[n][m],l[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>b[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            ;l[i][j]=a[i][j]+b[i][j];
        }
    }
        for(int i=0;i<n;i++)
    {
        cout<<endl;
        for(int j=0;j<m;j++)
        {
            cout<<l[i][j]<<" ";
        }
    }
    return 0;
}
