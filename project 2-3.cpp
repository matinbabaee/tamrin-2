#include <iostream>

using namespace std;

int main()
{

   int s, hour, remain, minute, second;



   cout << "adad ra vared konid> ";
   cin >> s;

   hour = s / 3600;
   remain = s % 3600;
   minute = remain / 60;
   second = remain % 60;


   cout << endl << hour <<":"<< minute << ":" << second << endl << endl;


    return 0;
}
