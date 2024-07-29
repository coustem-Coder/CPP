#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int left = 0;
  int right = sizeof(arr) / sizeof(int) - 1;

  while (left < right)
  {
    if (arr[left] % 2 != 0 and arr[right] % 2 == 0)
    {
      swap(arr[left++], arr[right--]);
    }
    if (arr[left] % 2 == 0)
    {
      left++;
    }
    if (arr[right] % 2 != 0)
    {
      right--;
    }
  }
  for (int ele : arr)
  {
    cout << ele << " ";
  }
}