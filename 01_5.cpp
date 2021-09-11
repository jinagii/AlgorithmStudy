// 2577 : 숫자의 개수

#include <iostream>

using namespace std;

int main()
{
   int A, B, C, mult;

   cin >> A;
   cin >> B;
   cin >> C;

   mult = A * B * C;
   
   int arr[10] = {0, };

   while (mult > 0)
   {
      arr[mult % 10]++;

      mult = mult / 10;
   }
   for (int i : arr)
   {
      cout << i << ' ';
   }

}
