
#include <iostream>

using namespace std;
void gcd(int a, int b)
{
    int z = 1; int x = 1;
    if (a > b)
    {
        int temp = b;
        while (temp != 0)
        {
            z = b % temp;
            x = a % temp;
            if (z == 0 && x == 0)
            {
                if (temp == 1)
                {
                    cout << a << " and " << b << " are co-prime" << endl;
                }
                else
                {
                    cout << a << " and " << b << " are not co-prime" << endl;
                }
                break;
            }
            temp--;
        }
    }
    else
    {
        int temp = a;
        while (temp != 0)
        {
            z = b % temp;
            x = a % temp;
            if (z == 0 && x == 0)
            {
                if (temp == 1)
                {
                    cout << a << " and " << b << " are co-prime" << endl;
                }
                else
                {
                    cout << a << " and " << b << " are not co-prime" << endl;
                }
                break;
            }
            temp--;
        }
    }


}
int main()
{

    int a, b;
    cout << "enter first number" << endl;
    cin >> a;
    cout << "enter second number" << endl;
    cin >> b;

    gcd(a, b);

}
