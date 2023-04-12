#include<iostream>
using namespace std;
class wall{
    private:
    int area;
    public:
     float length;
     float breadth;
    //  cout<<"enter the length";
    //  cin>>length>>endl;
    //  cout<<"enter the breadth";
    //  cin>>breadth>>endl;
     wall(){
        cout<<"enter the length";
        cin>>length;
        cout<<"enter the breadth";
        cin>>breadth;
       area = length*breadth;
       cout<<"are of rectangle is:"<<area<<endl; 
}

};
int main(){
    wall wall1;
    return 0;
}