
@ContestCodes
26 minutes ago
//please subscribe

class Solution {
public:
    string maximumOddBinaryNumber(string s){
        int cnt=0,n=s.length();
        //please subscribe
        for(int i=0;i<s.length();i++){
            if(s[i]=='1')
                cnt++;
        }
        if(cnt==0) return s;
        string res="";
        for(int i=1;i<cnt;i++)
            res+='1';
        for(int i=cnt;i<n;i++)
            res+='0';
        res+='1';
        return res;
    }
};
