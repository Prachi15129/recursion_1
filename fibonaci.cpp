#include <iostream>
using namespace std;
int fib(int n)
{
    //base case
    if(n==0||n==1)
    {
        return 1;
    }
    else
     {
        return fib(n-1)+fib(n-2);
    }
}
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<fib(i)<<endl;
    }
    return 0;
}
bnaciapp
