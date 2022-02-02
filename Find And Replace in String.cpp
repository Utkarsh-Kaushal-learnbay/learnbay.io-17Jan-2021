class Solution {
public:
    string findReplaceString(string s, vector<int>& indices, vector<string>& sources, vector<string>& targets) {
        vector<pair<int,int>> indices1;
        for(int i=0;i<indices.size();i++){
            indices1.push_back(make_pair(indices[i],i));
        }
        sort(indices1.begin(),indices1.end());
        int inc=0;
        for(pair<int,int> index:indices1){
            int i=index.first+inc;
            int k=index.second;
            bool cmp=sources[k].compare(s.substr(i,sources[k].length()));
            if(cmp==0){
                s=s.substr(0,i)+targets[k]+s.substr(i+sources[k].length());
                inc+=(targets[k].length()-sources[k].length());
            }
            k++;
        }
        return s;
    }
};
