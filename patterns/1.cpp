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
    int number_of_rows;
    cin >> number_of_rows;
    int spaces = number_of_rows - 1;
    for (int i = 1; i <= number_of_rows; i++)
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