// https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/algorithm/shubham-and-xor-8526868e/description/


#include <bits/stdc++.h>

using namespace std;

// int main(){
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);
//     int *arr, n, j, c = 0;
//     cin >> n ;
//     arr = new int[n];
//     for (int i = 0 ; i < n ; i++)
//         cin >> arr[i];
//     sort(arr, arr+n);
//     for ( int i = 0; i < n; i++){
//         j = i + 1;
//         while (arr[i] == arr[j]){
//             c++;
//             j++;
//         }
//     }
//     cout << c;
//     return 0; 
// }
#include <bits/stdc++.h>
using namespace std;
int main(){
int i,j,n,a;
long long ans = 0;
unordered_map<int, int> mp;
scanf("%d", &n);
for(i = 0; i < n; i++){
scanf("%d", &a);
mp[a]++;
ans -= (1ll) * (mp[a] - 1) * (mp[a] - 2) / 2;
ans += (1ll) * (mp[a]) * (mp[a] - 1) / 2;
}
printf("%lld\n", ans);
return 0;
}