// 18258 : 카드 2

#include <iostream>
#include <stack>
#include <string>
#include <queue>
#include <deque>


using namespace std;

int main(void)
{
   ios::sync_with_stdio(0);
   cin.tie(0);

   int N;

   cin >> N;

   deque<int> cards;
   
   while (N > 0)
   {
      // 1번 카드가 맨 위에 
      cards.push_back(N);

      N--;
   }

   while (cards.size() > 1)
   {
      cards.pop_back();

      cards.push_front(cards.back());

      cards.pop_back();
   }

   cout << cards.back();
}