#include <iostream>

using namespace std;

int main()
{
     int x,y[100];


     cout << " x ra vared konid";
     cin >>x;


     y[0]=1;
     y[1]=1;
     for (int i = 2 ; i<x ; i++){
        y[i]=y[i-1]+y[i-2];
     }
     for ( int i=0; i<x;i++){
        cout << y[i] << " , " ;
     }
     cout << endl;


    return 0;
}
