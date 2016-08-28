class Solution {
public:
    string reverseVowels(string s) {
   for(int i=0;i<s.length();i++)
         {  // place=0;
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                for(int j=i;j<s.length();j++)
                {
                    if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'||s[j]=='A'||s[j]=='E'||s[j]=='I'||s[j]=='O'||s[j]=='U')
                    {
                         char temp = s[j];
                        s[j] = s[i];
                        s[i] = temp;
                    }
                    //else 
                      //  j++;
                }
                
            }
         }   
        
        return s;
     }
};
