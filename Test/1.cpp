#include<bits/stdc++.h>
using namespace std;



typedef bool                      boo;
typedef int                       li;
typedef long long int             ll;
typedef unsigned long long int    lu;
typedef double                    db;


//--------------------------------------------------------------------------//


#define out 			cout<<
#define loop 			for(int i = 0 ; i < n; i++)
#define Loop 			for(int i = 0 ; i <= n ; i++)
#define LooP 			for(int i = 1 ; i <= n ; i++)
#define revloop 		for(int i = n-1; i>0 ; i--)
#define tc              int t; cin>>t;while(t--)
#define faster          ios::sync_with_stdio(0); cin.tie(0);cout.tie(0); 
#define nl              <<"\n"
#define in 				cin>>
#define gcd(a,b)        __gcd(a,b)
#define in_out          freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define spc             <<" "    
//--------------------------------------------------------------------------//






//--------------------------------------------------------------------------//
//--------------------------------------------------------------------------//

bool is_sorted(int a[] , int n){
    int f = 0;
    loop{
        if(a[i] != i+1){
            f = 1;
            break;
        } 
    }
    if(f ==1) return false;
    else return true;
}
void solve(){
    int n;
    in n;
    int a[n];
    int max = 0;
    
	loop{
        int x;
        in x;
        a[i] = x;
        if(max <= x) max = x;
    }
    if(is_sorted(a,n)){
        cout<<0<<endl;
    }
    else{
        if(a[0] == max && a[n-1] == 1 ){
            out 3 nl;
        }
        else if(a[n-1] == max || a[0] == 1){
            out 1 nl;
        } 
        else{
            out 2 nl;
        }
    }
}
int main(){
    //in_out
	faster


	tc solve();

}	

