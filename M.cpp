#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a;

    for(int i=a;i>=1;i--){
    for (int j =1 ;j <=i; j++)     
    {
        cout<<j<<" ";
    }
    cout<<"\n";
    }
    
    return 0;

}