// 10871 : X보다 작은수

#include <iostream>

using namespace std;

int main()
{
   int N, X;
   cin >> N >> X;

   int* arr = new int[N]; // int(n)으로 했다가 틀림
   
   for (int i = 0; i < N; i++)
   {
      cin >> arr[i];
   }

   for (int i = 0; i < N; i++)
   {
      if (arr[i] < X)
      {
         cout << arr[i] << ' ';
      }
   }

   return 0;
}

/*
int main()
{
   int N, X, arr[10005];
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   cin >> N >> X;

   for (int i = 0; i < N; i++)
   {
      cin >> arr[i];
   }

   for (int i = 0; i < N; i++)
   {
      if (arr[i] < X)
      {
         cout << arr[i] << ' ';
      }
   }

   return 0;
}


int main()
{
   int N, X, t;
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   cin >> N >> X;

  
   while (N--)
   {
      cin >> t;

      if (t < X)
      {
         cout << t << ' ';
      }
   }
   return 0;
}

*/