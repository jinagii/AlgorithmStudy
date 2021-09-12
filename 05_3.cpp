// 4949 : ±ÕÇüÀâÈù ¼¼»ó

#include <iostream>
#include <string>
#include <algorithm>
#include <list>
#include <stack>
#include <vector>

using namespace std;

int main(void)
{
   while (1)
   {
      string sentence;
      bool isBalanced = true;

      getline(cin, sentence);

      if (sentence.front() == '.')
      {
         break;
      }

      stack<char> brackets;

      for (int i = 0; i < sentence.length(); i++)
      {
         if (sentence[i] == '[' || sentence[i] == '(')
         {
            brackets.push(sentence[i]);
         }

         if (sentence[i] == ']')
         {
            if (brackets.size() == 0 || brackets.top() != '[')
            {
               isBalanced = false;
               break;
            }

            brackets.pop();
         }
         else if (sentence[i] == ')')
         {
            if (brackets.size() == 0 || brackets.top() != '(')
            {
               isBalanced = false;
               break;
            }

            brackets.pop();
         }
      }

      if (brackets.size() != 0)
      {
         isBalanced = false;
      }

      if (isBalanced == true)
      {
         cout << "yes\n";
      }
      else
      {
         cout << "no\n";
      }

   } // end of while
}