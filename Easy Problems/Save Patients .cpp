//https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/algorithm/save-patients/


#include <bits/stdc++.h>
using namespace std;
int main()
{
    
     ios_base::sync_wish_stdio(false);
     cin.tie(NULL);
    int n,*v,*m,i;
    cin>>n;
    
    
    v = new int[n];
    m = new int[n];
    for( i = 0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i = 0;i<n;i++)
    {
        cin>>m[i];
    }
    sort(v,v+n);
    sort(m,m+n);
    if(v[i]<m[i])
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}
