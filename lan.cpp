# include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int c = a % 10;
    c = c * 2;
    c += 5;
    c = c * 50;
    c += 1764;
    c -= b;
    cout<<c;
    }
