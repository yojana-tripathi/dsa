string Solution::solve(string s) {
     string word = "";
    string res = "";
    for (char i: s) {
        if (i == ' ') {
            res = word + " " + res;
            word = "";
        } else {
            word += i;
        }
    }
    res = word + " " + res;
 return res.substr(0, res.size() - 1);
}
