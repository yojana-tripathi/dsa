vector<string> split_string(string);
string catAndMouse(int x, int y, int z) {
   int X = abs(x-z);
    int Y = abs(y-z);
    if(X<Y)return "Cat A";
    if(Y<X)return "Cat B";
    else {
        return "Mouse C";

    }
}
