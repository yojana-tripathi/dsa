class cars{
    public:
    int price;
    string model;
};
int main(){
    cars detail;
    detail.price = 46 ;
    detail.model = "bmw";
    for(int i=0; i<3; i++){
        cin>>detail.price;
        cin>>detail.model;
        cout<<detail.price<<endl;
         cout<<detail.model<<endl;
    }
    return 0;
}
