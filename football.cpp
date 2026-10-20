#include <iostream>
using namespace std;

int main()
{
    string a;
    cin >> a;

    int x = a.size();

    int k = 0;
    int f = 0;

    if (x < 7)
    {
        cout << "NO";
    }
    else
    {
        for (int i=0; x-i>=7; i++)
        {
            if (f==1)
            {
                break;
            }

        else
            {
                for (int j=i+1; k<7; j++)
                {
                    if (a[i] == a[j])
                    {
                        k++;
                    }
                    else
                    {
                        break;
                    }

                    if (k == 6)
                    {
                        cout << "YES";
                        f++;
                    }
                }

                k = 0;
            }
        }

        if (f == 0)
        {
            cout << "NO";
        }
    }
}