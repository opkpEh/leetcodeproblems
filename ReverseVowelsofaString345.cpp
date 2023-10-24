class Solution {
public:
    string reverseVowels(string s) {

        vector<int> vIndex= {};

        for (int i= 0; i<= s.length(); i++)
        {
            char ch= s[i];
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            {
                vIndex.push_back(i);
            }
        }

        vector <int> vvIndex= vIndex;
        reverse(vvIndex.begin(), vvIndex.end());
        string ss= s;

        for (int i= 0; i<vIndex.size(); i++)
        {
            s[vIndex[i]]= ss[vvIndex[i]]; 
        }

        return s;
    }
};
