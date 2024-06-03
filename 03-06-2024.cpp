class Solution {
public:
    int appendCharacters(string s, string t) {
        int i=0, j=0, n=s.length(), m=t.length();
        while(j<m && i<n){
            if(t[j]==s[i]){
                i++;
                j++;
            }
            else{
                i++;
            }
        }
        return m-j;
    }
};
