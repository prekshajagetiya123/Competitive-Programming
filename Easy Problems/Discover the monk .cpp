//https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/discover-the-monk/description/

#include<bits/stdc++.h>
#include<vector>

using namespace std;   

int main()
 {
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
 
     long long n,q,c;
     cin>>n>>q;
    vector<int>arr;
    for(int i =0;i<n;i++)
     {cin>>c;
     arr.push_back(c);
     }
    //   for(int i =0;i<arr.size();i++)
    //  {
    //      cout<<arr.at(i);
    //  }
        sort(arr.begin(), arr.end());
     while(q--)
     {
         int x;
         
            cin>>x;
//            
         if(binary_search(arr.begin(),arr.end(),x))
            {  cout<<"YES"<<endl;}
         else
            {cout<<"NO"<<endl;}
     }
     return 0;
}