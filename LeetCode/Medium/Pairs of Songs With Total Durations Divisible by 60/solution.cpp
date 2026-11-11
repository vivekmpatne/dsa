class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        // int n = time.size();
        // // brute force can its 10^4
        // int cnt = 0;
        // for(int i = 0; i < n; i++){
        //     for(int j = i+1; j<n; j++ ){
        //         int sum = time[i] + time[j];
        //         if( sum % 60 == 0) cnt++;
        //     }
        // }
        // return cnt; 
        // Hehe TLE at test case 34/35. 
        
        // Approch 2 :  Lets Use J trick ( when cnt and pair sum or div or diff) ( optimization)
        // Aprroch 3 : can use two pointer also sort the array and two ptr  
        // Aprroch 4 : hashing rem cnt 

        int n = time.size();
        int mp[60] = {0};
        long long cnt = 0;

        for(int j=0; j<n; j++){
            int rem = time[j] % 60;
            int need = ( 60 - rem ) % 60;
            cnt += mp[need];

            mp[rem]++;
        }
        return cnt;
    }
};