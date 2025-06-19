class Solution {
  public:
    string caseSort(string& s) {
        // code here
        string upper="";
        string lower="";
        for(auto i:s)
        {
            if(isupper(i))
            {
                upper+=i;
            }
            else
            {
                lower+=i;
            }
        }
        sort(upper.begin(),upper.end());
        sort(lower.begin(),lower.end());
        int x=0;
        int y=0;
        for(int i=0;i<s.size();i++)
        {
            if(isupper(s[i]))
            {
                s[i]=upper[x];
                x+=1;
            }
            else
            {
                s[i]=lower[y];
                y+=1;
            }
        }
        return s;
    }
};