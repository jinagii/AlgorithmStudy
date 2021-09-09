// 10807 개수 세기

#include <iostream>

using namespace std;

int main()
{
   int N;
   int arr[101];
   int V;
   int cnt = 0;

   cin >> N;

   for (int i = 0; i < N; i++)
   {
      cin >> arr[i];
   }

   cin >> V;

   for (int i = 0; i < N; i++)
   {
      if (arr[i] == V)
      {
         cnt++;
      }
   }

   cout << cnt;
}