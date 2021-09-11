// 13300 : �� ����

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
   ios::sync_with_stdio(0);
   cin.tie(0);

   int N; // �����л� ��
   int K; // �ѹ濡 �ִ��ο���
   int S; // ���� 1: �� 0: ��
   int Y; // �г� 1 ~ 6
   int studentS[1000] = { 0, };
   int studentY[1000] = { 0, };

   int bang = 0; // �ʿ��� �氳��

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
