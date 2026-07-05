class Solution {
    String reverse(String x)
    {
        char[] s=x.toCharArray();
        int i=0,j=s.length-1;
        while(i<j)
        {
            char t = s[i];
            s[i]=s[j];
            s[j]=t;
            i++;
            j--;
        } 
        return new String(s);
    }
    public String reverseWords(String s) {
    String part="";
    String ans="";
    for(int i=0;i<s.length();i++)
    {
    if(s.charAt(i)==' ')
    {
        //reverse part and add to ans
        ans+=reverse(part);
        ans+=" ";
        part="";
    }
    else part+=s.charAt(i);
    }
    ans+=reverse(part);
    return ans;    
    }
}