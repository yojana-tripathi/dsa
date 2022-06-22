void recursion(string x =""){
    cout<<x<<"\n ";
    if(x.size()==3){
        return;
    }
    for(char a = 'a'; a<'d'; a++){
        recursion(x+a);
    }

}

int main(){
    string x = "";
      recursion(x);
}
