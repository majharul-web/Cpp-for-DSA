#include <bits/stdc++.h>
using namespace std;

class Cricketer

{
public:
    int jersey_no;
    string country;
};

int main()
{

    Cricketer *dhoni = new Cricketer;

    dhoni->jersey_no = 7;
    dhoni->country = "india";

    Cricketer *kohli = new Cricketer;

    kohli->jersey_no = 71;
    kohli->country = "india";

    //  got segmentation fault;
    /*
     kohli = dhoni;
     delete[] dhoni;
     cout << kohli->country << " " << kohli->jersey_no << endl;
     */

    kohli->country = dhoni->country;
    kohli->jersey_no = dhoni->jersey_no;

    cout << kohli->country << " " << kohli->jersey_no << endl;

       return 0;
}