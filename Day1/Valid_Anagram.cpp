/*Given two strings s1 and s2, return true if s2 is an anagram of s1, and false otherwise.*/
// leetcode , devnest
int solve(string s1, string s2){
    if(s1.size()!=s2.size()) return 0;
    int a[26] ={0};
    for(char c : s1){
        a[c-'a']++;
    }
    for(char c: s2){
        if(a[c-'a']<1) return 0;
        a[c-'a']--;
    }
    return 1;
}
