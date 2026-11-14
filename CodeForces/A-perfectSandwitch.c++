#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a;
    int b;
    while(n--)
    {
        cin >> a >> b;

        if (a <= b )
        {
            cout << "-1\n";
        }
        else
        {
            int sandwitch = min(a-b , b);
            cout << sandwitch << "\n";
        }
    }

    return 0;
}