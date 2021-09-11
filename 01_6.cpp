// 11328 : strfry

#include <iostream>
#include <string>

using namespace std;

int main()
{
   string s1[1001];
   string s2[1001];
   int N;

   cin >> N;

   for (int i = 0; i < N; i++)
   {
      cin >> s1[i] >> s2[i];
   }
   
   for (int i = 0; i < N; i++)
   {
      int alphabetS1[26] = { 0, };

      for (char ch : s1[i])
      {
         if (ch - 'a' < 0 || ch - 'a' > 26)
         {
            continue;
         }

         alphabetS1[ch - 'a']++;
      }

      for (char ch : s2[i])
      {
         if (ch - 'a' < 0 || ch - 'a' > 26)
         {
            continue;
         }

         alphabetS1[ch - 'a']--;
      }

      bool isPossible = true;

      for (int i : alphabetS1)
      {
         if (i != 0)
         {
            isPossible = false;

            break;
         }
      }

      if (isPossible == true)
      {
         cout << "Possible" << '\n';
      }
      else
         cout << "Impossible" << '\n';

   }

   return 0;
}
