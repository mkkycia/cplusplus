# include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    int maxx = 1, maxy = 1, minx = 100000, miny = 100000;
    for (int i = 1 ; i <= a ; i ++){
        int x,y;
        cin>>x>>y;
        if (x > maxx)
            maxx = x;
        if (x < minx)
            minx = x;
        if (y > maxy)
            maxy = y;
        if (y < miny)
            miny = y;

    }
    cout<<(maxx - minx + maxy - miny) * 2;
}
