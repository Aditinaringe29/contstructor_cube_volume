#include<iostream>
using namespace std;
class cube{
    private:
    double ht;
    double wdt;
    double ln;
    public:
    cube(){
        cout<<"enter height:"<<endl;
        cin>>ht;
        cout<<"enter width:"<<endl;
        cin>>wdt;
        cout<<"enter length:"<<endl;
        cin>>ln;
    } //constructor
    double volume(){
        double vol=ht*wdt*ln;
        cout<<vol<<endl;
        return vol;
    }
    void newht(){
        cout<<"enter height"<<endl;
        cin>>ht;
    } //setter
    double getht(){
        return ht;
        
    } //getter
    ~cube(){
        cout<<"destructor executed"<<endl;
    } //destructor

    
};
main()
{
    cube cb1;
    cb1.volume();
    cb1.newht();
    cb1.volume();
    cout<<cb1.getht()<<endl;
   
}