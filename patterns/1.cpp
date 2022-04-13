/*

n=5
    *
   * *
  * * *
 * * * *
* * * * *

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int spaces = n - 1;
    for (int i = 1; i <= n; i++)
    {
        // print spaces
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }
        spaces--;
        // print stars
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}