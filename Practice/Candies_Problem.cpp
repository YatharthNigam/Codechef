#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n], ans[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        ans[i] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            while (true)
            {
                if (ans[i] < ans[i + 1])
                    break;
                else
                    ans[i + 1]++;
            }
        }
        else if (arr[i] > arr[i + 1])
        {
            while (true)
            {
                if (ans[i] > ans[i + 1])
                    break;
                else
                    ans[i]++;
            }
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += ans[i];
    }
    cout << sum << endl;
    return 0;
}

// #include <bits/stdc++.h>
// //#include <ext/pb_ds/assoc_container.hpp>
// //#include <boost/multiprecision/cpp_int.hpp>
// using namespace std;
// //using namespace __gnu_pbds;
// //using namespace boost::multiprecision;
// #define int long long
// #define flash ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
// #define MP make_pair
// #define PB push_back
// #define FF first
// #define SS second
// #define MOD 1000000007
// #define test int t;cin>>t;while(t--)
// #define REP(i,a,b) for (int i = a; i < b; i++)
// #define all(a) (a).begin(),(a).end()
// //typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
// typedef vector<int> VI;
// typedef vector<vector<int>> VVI;
// typedef pair<int, int> PII;
// typedef vector<PII> VPII;
// typedef set<int> SI;
// typedef map<string, int> MSI;
// typedef map<int, int> MII;
// typedef pair<int, PII> PIII;


// void solve(){
//     int n;cin>>n;
//     VI vec(n);
//     map<int,vector<int>> nums;
//     REP(i,0,n){
//         int x;cin>>x;
//         nums[x].PB(i);
//         vec[i]=x;
//     }
//     VI ans(n,0);
//     for(auto i=nums.begin();i!=nums.end();i++){
//         int s=i->second.size();
//         REP(j,0,s){
//             int ind=i->second[j];
//             if(ind==0||ind==n-1){
//                 if(ind==0){
//                     if(vec[ind+1]==vec[ind]){
//                         ans[ind]=1;
//                     }else{
//                         ans[ind]=ans[ind+1]+1;
//                     }
//                 }
//                 else{
//                     if(vec[ind-1]==vec[ind]){
//                         ans[ind]=1;
//                     }else{
//                         ans[ind]=ans[ind-1]+1;
//                     }
//                 }
//             }else{
//                 if(ans[ind-1]==ans[ind+1]){
//                     ans[ind]=ans[ind-1]+1;
//                 }else{
//                     if(vec[ind-1]<vec[ind]){
//                         if(vec[ind+1]<vec[ind]){
//                             ans[ind]=max(ans[ind-1],ans[ind+1])+1;
//                         }else{
//                             ans[ind]=ans[ind-1]+1;
//                         }
//                     }else{
//                         if(vec[ind+1]<vec[ind]){
//                             ans[ind]=ans[ind+1]+1;
//                         }
//                     }
//                 }
//             }
//         }
//     }
//     int sum=0;
//     REP(i,0,n){
//         //cout<<ans[i]<<" ";
//         sum+=ans[i];
//     }
//     cout<<sum;

// }

// int32_t main()
// {
//    flash;
// // test
// // {
// //     solve();
// // }
// solve();
// return 0;
// }