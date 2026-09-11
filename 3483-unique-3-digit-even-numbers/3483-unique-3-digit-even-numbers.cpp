class Solution {
public:
unordered_set<int> s;
int count=0;
    void build(int i,vector<int>&digits,long long num)
    {
        //unique 3 digit num 
        //each number should get chance to get placed at each placed 
        if(i>3)return;
        if(i==3)
        {
            if(num%2==0 && !s.count(num) && to_string(num).length()==3)
            {
                s.insert(num);
                count++;
                return;
            }
        }
        for(int j=i;j<digits.size();j++)
        {
            //give evryone a chance
            swap(digits[i],digits[j]);
            build(i+1,digits,num*10+digits[i]);
            swap(digits[i],digits[j]);
        }
    }
    int totalNumbers(vector<int>& digits) {  
    // build each permutation and then select unique evens
    build(0,digits,0);
    return count;  
    }
};