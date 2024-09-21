#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int second_last = 0;
    int last = 1;
    cout<<second_last<<" "<<last<<" ";
    
    int cur;

    for(int i = 2; i<=n; i++)
    {
        cur = second_last + last;
        cout<<cur<<" ";
        second_last = last;
        last = cur;

    }
}
