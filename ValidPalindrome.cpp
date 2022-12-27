bool isPalindrome(string s) {
    if(s.empty()) return true;
    int i = 0;
    s.erase(remove_if(s.begin(), s.end(), [](char c) { return !isalpha(c) && !isdigit(c);} ),s.end());
    std::transform(s.begin(), s.end(), s.begin(),
                   [](unsigned char c){ return std::tolower(c); });
    while(((s.size()/2)) > i)
    {
        if(*(s.begin() +i) != *( s.end() - (i+1)))
            return false;
        i++;
    }
    return true;
}
