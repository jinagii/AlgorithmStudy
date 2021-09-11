// 13300 : 방 배정

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
   ios::sync_with_stdio(0);
   cin.tie(0);

   int N; // 참가학생 수
   int K; // 한방에 최대인원수
   int S; // 성별 1: 남 0: 여
   int Y; // 학년 1 ~ 6
   int studentS[1000] = { 0, };
   int studentY[1000] = { 0, };

   int bang = 0; // 필요한 방개수

   cin >> N;
   cin >> K;

   for (int i = 0; i < N; i++)
   {
      cin >> studentS[i] >> studentY[i]; // ex. 0101110110 1361356133
   }

   int yearBoy[6] = { 0, };
   int yearGirl[6] = { 0, };

   for (int i = 0; i < N; i++)
   {
      if (studentS[i] == 0)
      {
         yearGirl[studentY[i]-1]++;
      }
      else
      {
         yearBoy[studentY[i]-1]++;
      }
   }

   for (int b : yearBoy)
   {
      while (b > 0)
      {
         b -= K;
         bang++;
      }
   }

   for (int g : yearGirl)
   {
      while (g > 0)
      {
         g -= K;
         bang++;
      }
   }

   cout << bang;
}
