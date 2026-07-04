class Solution {
    public boolean isPalindrome(String s) {
    String a="";
    for(char c:s.toCharArray())
    {
        if((c<='z' && c>='a') ||(c>='0' && c<='9') )a+=c;
        if(c>='A' && c<='Z')a+=(char)('a'+c-'A');
    } 
    String b=new StringBuilder(a).reverse().toString();  
    return a.equals(b);
    }
}