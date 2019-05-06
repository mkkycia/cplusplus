#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    int b = 1;
    while (a >= b){
        if (b != 1)
            cout<<endl;
        cout<<b;
        b = b*2;
    }
}
