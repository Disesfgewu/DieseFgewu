#include<bits/stdc++.h>

using namespace std;



int main()

{

    int year;



    // ���ƿ�J

    while (cin >> year)

    {

        year -= 1804 - 60;

        year %= 60;

        switch (year % 10)

        {

            case 0: cout << "��"; break;

            case 1: cout << "�A"; break;

            case 2: cout << "��"; break;

            case 3: cout << "�B"; break;

            case 4: cout << "��"; break;

            case 5: cout << "�v"; break;

            case 6: cout << "��"; break;

            case 7: cout << "��"; break;

            case 8: cout << "��"; break;

            case 9: cout << "��"; break;

        }



        switch (year % 12)

        {

            case 0: cout << "�l"; break;

            case 1: cout << "��"; break;

            case 2: cout << "�G"; break;

            case 3: cout << "�f"; break;

            case 4: cout << "��"; break;

            case 5: cout << "�x"; break;

            case 6: cout << "��"; break;

            case 7: cout << "��"; break;

            case 8: cout << "��"; break;

            case 9: cout << "��"; break;

            case 10: cout << "��"; break;

            case 11: cout << "��"; break;

        }

        cout << '\n';

    }

    

    return 0;

}
