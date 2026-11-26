class Solution {
public:
    bool canAliceWin(int n) {
        
        if( n < 10 ) return false;
        if( n < 19 ) return true; // alice wins ( 10, bob => cant move 9))
        if( n < 27 ) return false;
        if( n < 34 ) return true;
        if( n < 40 ) return false;
        if( n < 45 ) return true;
        if( n < 49 ) return false;

        return true;
    }
};