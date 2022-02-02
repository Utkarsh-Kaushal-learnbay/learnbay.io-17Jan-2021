class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        map<string,int> ourmap;
        for(string s:cpdomains){
            string str="";
            int i=0;
            while(s[i]!=' '){
                str+=s[i];
                i++;
            }
            int num=stoi(str);
            ourmap[s.substr(i+1)]+=num;
            i++;
            while(s[i]){
                if(s[i]=='.'){
                    ourmap[s.substr(i+1)]+=num;
                }
                i++;
            }
        }
        vector<string> ans;
        for(auto it=ourmap.begin();it!=ourmap.end();it++){
            ans.push_back(to_string(it->second)+" "+(it->first));
        }
        return ans;
    }
};
