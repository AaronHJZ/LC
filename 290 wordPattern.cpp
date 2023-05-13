class Solution {
public:
	vector<string> split(string& str, char delim)
	{
		vector<string> words;
		stringstream ss(str);
		string elem;

		while (getline(ss, elem, delim))
			if (!elem.empty())
				words.push_back(elem);

		return words;
	}

    bool wordPattern(string pattern, string s) 
	{
		vector<string> words = split(s, ' ');

		if (pattern.size() != words.size())
			return false;

		unordered_map<string, char> str2pat;
		unordered_map<char, string> pat2str;
		for (int i = 0; i < pattern.size(); ++i)
		{
			if (str2pat.count(words[i]) != 0 && str2pat[words[i]] != pattern[i])
				return false;
			if (pat2str.count(pattern[i]) != 0 && pat2str[pattern[i]] != words[i])
				return false;

			str2pat[words[i]] = pattern[i];
			pat2str[pattern[i]] = words[i];
		}

		return true;
    }
};

