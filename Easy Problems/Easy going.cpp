// https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/algorithm/min-max-difference/


#include<bits/stdc++.h>

using namespace std;


int main(){   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

     int t,*arr;
     cin>>t;
while(t--)
  {   
     int  n, m, d = 0, minSum = 0, maxSum = 0, sum = 0;
     cin>>n;
     cin>>m;
     arr = new int(n);
    
     for(int i = 0; i<n; i++){
     cin>>arr[i];
     sum += arr[i];
     }
sort(arr, arr+n);
     
 for(int i = m;i<n;i++)
        maxSum += arr[i];

for(int j = 0;j<(n-m);j++)
        minSum += arr[j];
        
     cout<<(maxSum)-(minSum)<<"\n";//this is difference of maximum and minimum sum
    
     
 }
    //  return 0;
 }