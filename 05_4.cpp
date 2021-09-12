// 10799 : 쇠막대기

#include <iostream>
#include <string>
#include <algorithm>
#include <list>
#include <stack>
#include <vector>

using namespace std;

int main(void)
{
   ios::sync_with_stdio(0);
   cin.tie(0);

   string rogNLaser;
   stack<char> rog;
   int stackedRog = 0;
   int cutRog = 0;

   cin >> rogNLaser;

   int loop = rogNLaser.length();

   for (int i = 0; i < rogNLaser.size(); i++)
   {
      if (rogNLaser[i] == '(')
      {
         rog.push(rogNLaser[i]);
         if (rog.size() > 1)
         {
            stackedRog++;
         }
      }

      // 레이저인 경우다
      if (rogNLaser[i] == ')' && rogNLaser[i - 1] == '(')
      {
         rog.pop();
         stackedRog--;
         cutRog += rog.size();
      }
      else if(rogNLaser[i] == ')')
      {
         // 나무 하나끝
         stackedRog--;
         cutRog++;
         rog.pop();
      }
   }

   cout << cutRog;

}