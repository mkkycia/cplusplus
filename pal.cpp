# include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    string a = "";
    int n = s.size();
    for (int i = n - 1 ; i > -1 ; i--)
        a += s[i];
    if (s == a)
        cout<<"TAK";
    else
        cout<<"NIE";
    }
