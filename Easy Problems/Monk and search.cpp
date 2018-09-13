//https://www.hackerearth.com/zh/practice/algorithms/searching/binary-search/practice-problems/algorithm/monk-and-search-2/
#include<bits/stdc++.h>
#include<vector>

using namespace std;   

int main()
 {
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
 
     long long n,q,c;
     
     cin>>n;
    vector<int>arr;
    for(int i =0;i<n;i++)
     {
         cin>>c;
     arr.push_back(c);
    // cout<<"hello";
     }
     cin>>q;
     //cout<<q;
    //   for(int i =0;i<arr.size();i++)
    //  {
    //      cout<<arr.at(i);
    //  }
        sort(arr.begin(), arr.end());
     while(q!=0)
     {
         //cout<<"working";
         int x,o;
         
            cin>>o>>x;
//            
            if(o==0)
          {int result = lower_bound(arr.begin(),arr.end(),x)-arr.begin();
           cout<<n-result<<"\n";
              //cout<<"positive response"<<"\n";
          }
         else if(o==1)
         {
            int result= upper_bound(arr.begin(), arr.end(), x)-arr.begin();
        cout<<n-result<<"\n";
        //cout<<"im working too";
        }
        else
        continue;
        q--;
            
     }
     return 0;
}