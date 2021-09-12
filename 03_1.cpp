// 10828 : 스택

//#include "stdc.h"

#include <iostream>
#include <stack>
#include <string>


using namespace std;

int main(void)
{
   ios::sync_with_stdio(0);
   cin.tie(0);

   int N; // 명령수

   cin >> N;

   stack<int> numbers;

   while (N-- > 0)
   {
      string op;

      cin >> op;

      if (op == "push")
      {
         int num;
         cin >> num;
         numbers.push(num);
      }
      else if (op == "pop")
      {
         if (numbers.size() == 0)
         {
            cout << -1 << '\n';
         }
         else
         {
            cout<< numbers.top()<<'\n';

            numbers.pop();
         }
      }
      else if (op == "size")
      {
         cout << numbers.size() << '\n';
      }
      else if (op == "empty")
      {
         if (numbers.size() == 0)
         {
            cout << 1 << '\n';
         }
         else
         {
            cout << 0 << '\n';
         }
      }
      else if (op == "top")
      {
         if (numbers.size() == 0)
         {
            cout << -1 << '\n';
         }
         else
         {
            cout << numbers.top() << '\n';
         }
      }
   }
}