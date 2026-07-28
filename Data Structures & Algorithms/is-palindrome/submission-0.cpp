class Solution {
public:
    bool isPalindrome(string s) {
        stack <int> s1;
        char ch;
        for(int i = 0;i<s.size();i++){
            if(s[i]>='a'&&s[i]<='z' || s[i]>='A'&&s[i]<='Z'||
            s[i]>='0'&&s[i]<='9'){
                if(s[i]>='A'&&s[i]<='Z'){
                    ch = tolower(s[i]);
                     s1.push(ch);
                }else{
                    s1.push(s[i]);
                }
                
               
                
            }
        }
        for(int i = 0;i<s.size();i++){
             if(s[i]>='a'&&s[i]<='z' || s[i]>='A'&&s[i]<='Z'||
            s[i]>='0'&&s[i]<='9'){
                if(s[i]>='A'&&s[i]<='Z'){
                    ch = tolower(s[i]);
                    if(ch!=s1.top()){
                        return false;
                    }else{
                        s1.pop();
                    }
                }else{
                    if(s[i]!=s1.top()){
                        return false;
                    }else{
                        s1.pop();
                    }
                }

            }
           
            
            
        }
        return true;
    } 
};
