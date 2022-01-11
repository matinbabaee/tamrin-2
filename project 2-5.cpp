#include <iostream>
#include <time.h>
#include <string.h>


using namespace std;

int main()
{

    srand(time(0));

    string t;
    int r;


    for (int i=1 ; i<=6 ; i++)
    {

        cout <<  "tass ra ba tayp tass berizid";
        cin >> t;

        if(t == "tass")
        {

            r = rand()%6+1;
            cout << r << endl<< endl;



            if ( r == 6 )
            {
                cout << endl << "mitavanid dobore bendazid tass ra type konid ";
                cin >> t;
                r = rand()%6+1;
                cout << r << endl<< endl;

            }
            else {
                continue;
            }


        }
        else
        {
            cout << "eshtebah" << endl << endl;
            continue;
        }

    }
    return 0;
}
