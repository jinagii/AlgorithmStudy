// 5430 : AC

#include <iostream>
#include <string>
#include <algorithm>
#include <list>
#include <deque>
#include <vector>

// 문제를 다시이해해야하는듯

using namespace std;

deque<int> FunctionR(deque<int>& numbers)
{
   deque<int> reverse;
   int size = numbers.size();

   for (int i = 0; i < size; i++)
   {
      int temp;
      temp = numbers.front();
      reverse.push_front(temp);
      numbers.pop_front();
   }

   return reverse;
}

void FunctionD(deque<int>& numbers)
{
   if (numbers.size() > 0)
   {
      numbers.pop_front();
   }
   else
   {
      return;
   }
}

int main(void)
{
   ios::sync_with_stdio(0);
   cin.tie(0);

   int testCase;
   string functionP;
   int arrNum;


   cin >> testCase;

   while (testCase-- > 0)
   {
      cin >> functionP;
      cin >> arrNum;

      deque<int> Numbers;

      cout << '[';
      if (arrNum == 0)
      {
         cout << ']'<<'\n';
         cout << "error";
         continue;
      }

      while (arrNum-- > 0)
      {
         int num;

         if (arrNum == 0)
         {
            cin >> num;
            cout << ']' << '\n';
         }
         else
         {
            cin >> num;
            cout << ',';
         }

         Numbers.push_back(num);
      }

      for (char ch : functionP)
      {
         if (ch == 'R')
         {
            Numbers = FunctionR(Numbers);
         }
         else if (ch == 'D')
         {
            FunctionD(Numbers);
         }
      }

      if (Numbers.size() == 0)
      {
         cout << "error" << '\n';
      }
      else
      {
         cout << '[';
         for (int n : Numbers)
         {
            if (n == Numbers.back())
            {
               cout << n << ']';
            }
            else
            {
               cout << n << ',';
            }
         }
      }
   }
}