#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    for(int i=1;i<=7;i++)
    {
        v.push_back(i);
    }
    int n,sum=0,temp;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        if(i>7)
        {

            temp=i%7;
            cout<<temp <<" for i ="<<i<<endl;
             cout << i <<" is so sum will be added as"<<v[temp-1]<<endl;
            sum+=v[temp-1];
        }
        else
        {
            sum+=v[i];
            v[i]++;
        }
    }
    cout<<sum<<endl;
    for(auto i:v)
    {
        cout<<i;
    }
}
