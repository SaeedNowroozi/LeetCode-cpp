  bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if (s.compare(t) == 0) return true;
        return false;
    }
//////////////////////
 bool isAnagram(string s, string t) {
 unordered_map<char,int> mp;
         for(auto i:s) mp[i]++;
         for(auto i:t) mp[i]--;
         for(auto i = mp.begin(); i != mp.end();i++){
        if(i->second != 0)
        return false;}
        return true;
 }
