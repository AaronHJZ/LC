class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
	{
		unordered_map<char, int> s_note;
		unordered_map<char, int> s_magazine;

		for (char c : ransomNote)
			s_note[c]++;

		for (char c : magazine)
			s_magazine[c]++;

		for (pair<char, int> p : s_note)
			if (p.second > s_magazine[p.first])
				return false;

		return true;
    }
};
