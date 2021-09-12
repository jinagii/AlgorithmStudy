

#include <iostream>
#include <stack>
#include <string>
#include <queue>
#include <deque>


using namespace std;

int main(void)
{
   int N; // 큐의 크기
   int M; // 뽑을려는 수의 개수

   int moves = 0;
   int cursor = 1;

   queue<int> numbers;

   cin >> N >> M;

   while (M-- > 0)
   {
      int num;
      cin >> num;
      numbers.push(num);
   }

   while (!numbers.empty())
   {

   }

   cout << moves;
}
