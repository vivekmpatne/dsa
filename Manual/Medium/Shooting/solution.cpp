// optimal 
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin>>t;
    while(t--){
        ll n, m; cin>>m>>n;
        
        ll arr[n+15] = {0};
        ll p1 = 0, p2 = 0;
        
        ll k1[n+15] = {0}, k5[n+15] = {0};
        ll sum_k1[n+15] = {0}, sum_k5[n+15] = {0};
        
        ll sumr_k1[n+15] = {0}, sumr_k5[n+15] = {0};
        
        for(ll i=1; i<=n; i++){
            cin>>arr[i];
            if(arr[i] == 1 || arr[i] == 3){
                p1++;
                k1[i] = i;
            }
            if(arr[i] == 2 || arr[i] == 3){
                p2++;
                k5[i] = i;
            }
        }
        
        for(ll i=1; i<=n; i++){
            sum_k1[i] = k1[i] + sum_k1[i-1];
            sum_k5[i] = k5[i] + sum_k5[i-1];
        }
        
        for(ll i=n; i>= 1; i--){
            sumr_k1[i] = k1[i] + sumr_k1[i+1];
            sumr_k5[i] = k5[i] + sumr_k5[i+1];
        }
        
        ll cnt1 = 0, cnt2 = 0;
        
        for(ll i=1; i<= n; i++){
            if(k1[i] > 0){
                cnt1++;
            }
            
            ll d1 = i * cnt1 - sum_k1[i];
            ll d2 = sumr_k1[i] - i*p1;
            ll r1 = d1 + d2;
            
            if(k1[i] > 0){
                p1--;
            }
            
            if(k5[i] > 0){
                cnt2++;
            }
            
            ll d5 = i*cnt2 - sum_k5[i];
            ll d6 = sumr_k5[i] - i*p2;
            ll r5 = d5 + d6;
            
            if(k5[i]>0){
                p2--;
            }
            
            cout<<abs(r1-r5)<<" ";
        }
        
        cout<<"\n";
    }
    
    
    return 0;
}

// brute force. gives TLE.
//#include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;



// int main() {
// 	// your code goes here
// 	ios::sync_with_stdio(false);
// 	cin.tie(NULL);
	
// 	int q; cin>>q;
	
// 	while(q--){
	
// 	int n = 1;
// 	int m; cin>>m;
	
// 	int arr[m+1];
	
// 	int a[m+1];
// 	int k[m+1];
	
// 	for(int i=1; i<=m; i++){
// 	    if(arr[i] == 1){
// 	        a[i] = 1;
// 	    }
// 	    if(arr[i] == 2){
// 	        k[i] = 1;
// 	    }
// 	    if(arr[i] == 3){
// 	        a[i] = 1; k[i] = 1;
// 	    }
	    
// 	}   
	
// 	int aarsi[m+1];
	
// 	for(int line = 1; line<= m; line++){
// 	    int d = 0;
// 	    for(int i=1; i<=m; i++){
// 	        if(a[i]==1){
// 	            d = d + abs(line - i);
// 	        }
// 	    }
// 	    aarsi[line] = d;
// 	}
	
// 	int kripto[m+1];
// 	for(int line = 1; line<= m; line++){
// 	    int u = 0;
// 	    for(int i=1; i<=m; i++){
// 	        if(k[i]==1){
// 	            u = u + abs(line - i);
// 	        }
// 	    }
// 	    kripto[line] = u;
// 	}
	
// 	for(int i=1; i<=m; i++){
// 	    cout<<abs(aarsi[i] - kripto[i])<<" ";
// 	}
// 	cout<<"\n";
	    
// 	}
	
//     return 0;
// }
