// 1406 : ������

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

   string S; // �ʱ� ���ڿ�
   int M; // �Է��� ��ɾ� ����

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
      char order; // ��ɾ�
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
            // �ƹ��͵� ����
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
            // �ƹ��͵� ����
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

            cursor = chars.erase(cursor); // �̰ſ��� ���� Ʋ��
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