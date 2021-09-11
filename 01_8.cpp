// 1475 : 방 번호

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
   int N; // 방번호 0~1000000
   int numbers[10] = { 0, };
   int setCount = 0;

   cin >> N;

   if (N == 0)
   {
      cout << 1;
      return 0;
   }

   while (N > 0)
   {
      numbers[N % 10]++;

      N /= 10;
   }
   
   for (int i = 0; i < 10; i++)
   {
      if (i == 6 || i == 9)
      {
         continue;
      }

      setCount = max(numbers[i], setCount);
   }

   setCount = max((numbers[6] + numbers[9] + 1) / 2, setCount);

   cout << setCount;
}
