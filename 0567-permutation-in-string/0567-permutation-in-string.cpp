class Solution {
public:
    bool checkInclusion(string s1, string s2) {
    int n=s1.size();
    int m=s2.size();
    vector<int> freq(26,0);
    for(int i=0;i<n;i++){
        int dx=s1[i]-'a';
        freq[dx]++;
    }
    
    for(int i=0;i<m-n+1;i++)
    {   vector<int> f2(26,0);
        string sub=s2.substr(i,n);
        for(int j=0;j<n;j++)
        {
            int dx= sub[j]-'a';
            f2[dx]++;
            
        }
        
        if(f2==freq)return true;
        
    }

    return false;
    }
};