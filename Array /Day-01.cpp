/*

# It store same type of data type
# It store data in contineous memory allocation

Array Declararion :

Method 1

int arr[5]={23,4,45,11,5}

Method 2

int arr[]={23,422,55,78,86}

Method 3

int arr[5]={12,22} ---> in this case rest 3 block me garbage value ho ga

Method 4

int arr[4]={0} --> in this case the all value should be {0,0,0,0}

Method 5

int arr[];

now the take the size of array as input then enter the value
int size;
{9,34,54,242,77,88}


Note : Integer ka size 4 bytes ka ho ta hai
Note : Charater ka size 1 bytes ka ho ta hai
Note :  address = name + index * datatypes

Note : ans = INT_MAX;

*/

// Find the minimal element form this array
#include <climits>
#include <iostream>
using namespace std;

int main()
{
    // ans initially gets the value of INT_MAX, the largest possible int value.
    int ans = INT_MAX;  // int ans = INT_MAX;  // usually 2147483647
    int ans2 = INT_MIN; // // usually -2147483648
    int arr[] = {23, 423, 55, 2, 555};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < ans)
        {
            ans = arr[i];
        };
        if (arr[i] > ans2)
        {
            ans2 = arr[i];
        }
    };

    cout << "Minimum element: " << ans << " and max element is : " << ans2;

    return 0;
}