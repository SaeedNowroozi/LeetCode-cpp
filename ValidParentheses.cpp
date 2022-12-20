 bool isValid(string s) {
        stack<char> v;
        for (char c : s) {
        if (!v.empty()) {
            char topChar = v.top();
            switch (c) {
            case ')':
                if(topChar == '('){
                    v.pop();
                    break;
                }
                else{
                    v.push(')');
                    break;
                }
            case ']':
                if(topChar == '['){
                    v.pop();
                   break;
                }
                else
                {
                    v.push(']');
                    break;
                }
            case '}':
                if(topChar == '{'){
                    v.pop();
                    break;
                }
                else
                {
                    v.push('}');
                    break;
                }
            default:
                v.push(c);
            }
               } else {
            v.push(c);
        }
    }
    if (v.size() == 0)
    return true;
        else
            return false;
    }
