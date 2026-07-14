/*Take two integers a and b (b not equals to 0) as input. Print the result of ceiling integer division of a by b.*/
#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter two integers: ";
    cin>> a>>b;

    int result = (a+b-1)/b;
    cout<<"Output: "<<result<<endl;

    return 0;
}