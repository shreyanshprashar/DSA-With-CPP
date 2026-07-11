#include<iostream>
using namespace std;
int main(){
    int r;
    int a;
    float pi = 3.14;
    cout<<"Enter radius: ";
    cin>>r;
    cout<<"Enter side of square: ";
    cin>>a;

    float Square = a*a; //Area of square
    cout<<"Area of square is :"<<Square<<endl;
    
    float Circle = pi*r*r; //Area of circle
    cout<<"Area of circle is :"<<Circle<<endl;

    float AreaOfShadedRegion = Square - Circle;
    cout<<"Area of shaded region is :"<<AreaOfShadedRegion<<endl;

    return 0;



}