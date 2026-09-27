class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;
        for(const string& s: strs){
            encoded += to_string(s.length()) + delimiter;
            encoded += s;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded;
        int i = 0;
        while(i < s.length()){
            size_t delimiterPos = s.find(delimiter,i);
            int length = stoi(s.substr(i, delimiterPos-i));
            i = delimiterPos + 1;
            string str = s.substr(i,length);
            decoded.push_back(str);
            i += length;
        }
        return decoded;
    }
    private:
      const char delimiter = '/';
};
