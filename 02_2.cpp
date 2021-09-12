// 1406 : 에디터

#include <iostream>
#include <string>
#include <algorithm>
#include <list>
#include <vector>

using namespace std;

int main(void)
{
   ios::sync_with_stdio(0);
   cin.tie(0);

   string S; // 초기 문자열
   int M; // 입력할 명령어 개수

   cin >> S;
   cin >> M;

   list<char> chars;
   list<char>::iterator cursor;
   cursor = chars.end();

   for (char ch : S)
   {
      chars.push_back(ch);
   }

   while (M > 0)
   {
      char order; // 명령어
      char alphabet;

      cin >> order;

      if (order == 'P')
      {
         cin >> alphabet;
         chars.insert(cursor, alphabet);
      }
      else if (order == 'L')
      {
         if (cursor == chars.begin())
         {
            // 아무것도 안함
         }
         else
         {
            cursor--;
         }
      }
      else if (order == 'D')
      {
         if (cursor == chars.end())
         {
            // 아무것도 안함
         }
         else
         {
            cursor++;
         }
      }
      else if (order == 'B')
      {
         if (cursor == chars.begin())
         {

         }
         else
         {
            cursor--;

            cursor = chars.erase(cursor); // 이거에서 많이 틀림
         }
      }

      M--;
   }

   for (char ch : chars)
   {
      cout << ch;
   }

   return 0;
}