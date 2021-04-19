#include<iostream>
using namespace std;

int pow(int b,int p)
{
    if(p==0)
    {
        return 1;
    }
    
    
        return (b*pow(b,p-1));
    
}
int main()
{
    int b;
    cin>>b;
    int p;
    cin>>p;
    cout<<pow(b,p);
    return 0;
wepp
