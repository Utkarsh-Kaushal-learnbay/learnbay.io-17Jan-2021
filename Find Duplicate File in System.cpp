class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        map<string,vector<string>> ourmap;
        for(string s:paths){
            string root="";
            int i=0;
            while(s[i] && s[i]!=' ') root+=s[i++];
            if(s[i]) i++;
            string app="";
            while(s[i]){
                if(s[i]=='('){
                    string ans="";
                    i++;
                    while(s[i]!=')') ans+=s[i++];
                    ourmap[ans].push_back(root+'/'+app);
                }
                app+=s[i];
                if(s[i]==' ') app="";
                i++;
            }
        }
        vector<vector<string>> ans;
        for(auto it=ourmap.begin();it!=ourmap.end();it++){
            if((it->second).size()>1)
            ans.push_back(it->second);
        }
        return ans;
    }
};
