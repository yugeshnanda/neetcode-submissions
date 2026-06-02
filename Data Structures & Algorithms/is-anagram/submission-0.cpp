class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.length() != t.length()) { 
            return false ; 
        }

        vector<int> count(26,0) ;

        for ( int i = 0 ; i < s.length() ; i++) { 

            char ch = s[i] ; 
            int index = ch - 'a' ; 
            count[index]++ ; 

        }


        for ( int i = 0 ; i < t.length() ; i++) { 
            char ch = t[i] ; 
            int index = ch - 'a' ; 
            count[index]-- ; 
        }

        for ( int i = 0 ; i < count.size() ; i++ ) { 
            if (count[i] != 0 ){ 
                return false  ; 

            }
        }

        return true ; 


    }
    
};
