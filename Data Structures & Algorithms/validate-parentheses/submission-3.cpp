class Solution {
public:
    bool isValid(string s) {
        stack<char>s1;
        bool b = false;
        for(int i = 0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                s1.push(s[i]);
                
            }else{
                if(s1.size()!=0){
                    if((s1.top()=='('&&s[i]==')')||
                    (s1.top()=='{'&&s[i]=='}')||
                    (s1.top()=='['&&s[i]==']')){
                    
                        s1.pop();
                    }else{
                        return false;
                    }
                }else{
                    return false;
                }

            }
        }
        if(s1.size()==0){
            return true;
        }else{
            return false;
        }

    }
};
