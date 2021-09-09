#include <iostream>
#include <string>

using namespace std;


int func(int arr[], int N)
{
   // 각 수의 등장 여부를 체크하는 배열을 선언
   int occur[101] = {};

   for (int i = 0; i < N; i++)
   {
      // 이전에 등장한적이 있는 수면 1을 반환
      if (occur[100 - arr[i]] == 1)
      {
         return 1;
      }

      // 이번에 등장한 수면 그 인덱스의 값을 1로 변환
      occur[arr[i]] = 1;
   }

   return 0;
}

int main(void)
{
   int N;
   int arr[10];
    
   

}

