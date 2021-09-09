// 10808 : ¾ËÆÄºª °³¼ö

#include <iostream>
#include <string>

using namespace std;
//
//int main(void)
//{
//   string S;
//
//   getline(cin, S);
//
//   char alphabet[26] = {
//      'a','b','c','d','e','f','g','h','i','j',
//      'k','l','m','n','o','p','q','r','s','t',
//      'u','v','w','x','y','z' };
//
//   int alphabetIdx[26] = { 0, };
//
//   for (char ch : S)
//   {
//      for (int i = 0; i < 26; i++)
//      {
//         if (ch == alphabet[i])
//         {
//            alphabetIdx[i]++;
//         }
//      }
//   }
//
//   for (int idx : alphabetIdx)
//   {
//      cout << idx << ' ';
//   }
//
//}

/*
int main(void)
{
   string s;
   cin >> s;

   for (char i = 'a'; i <= 'z'; i++)
   {
      int cnt = 0;
      for (char c : s)
      {
         if (i == c)
         {
            cnt++;
         }
         cout << cnt << '';
      }
   }


}
*/

int main(void)
{
   string s;
   cin >> s;

   int alphabetIdx[26] = { 0, };

   for (char c : s)
   {
      alphabetIdx[c - 'a']++;
   }

   for (int i = 0; i < 26; i++)
   {
      cout << alphabetIdx[i] << ' ';
   }

}