#include <iostream>
using namespace std;
int main(){
    float pencil;
    float pen ;
    float eraser ;

    cout<<"enter the  cost of pencil" <<endl;
    cin>> pencil;
    cout<<"enter the cost of pen"<<endl;
    cin>> pen;
    cout<<"enter the cost of eraser"<<endl;
    cin>> eraser ;
    float sum = (pencil + pen + eraser);
    cout<<"the total sum ="<<sum<<endl;
    float gst = (sum +(0.18*sum));
    cout<<"sum with gst ="<<sum<<endl;
    cout<<"sum with gst = "<<gst<<endl;
    return 0;
    




}