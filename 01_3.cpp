#include <iostream>
#include <string>

using namespace std;


int func(int arr[], int N)
{
   // �� ���� ���� ���θ� üũ�ϴ� �迭�� ����
   int occur[101] = {};

   for (int i = 0; i < N; i++)
   {
      // ������ ���������� �ִ� ���� 1�� ��ȯ
      if (occur[100 - arr[i]] == 1)
      {
         return 1;
      }

      // �̹��� ������ ���� �� �ε����� ���� 1�� ��ȯ
      occur[arr[i]] = 1;
   }

   return 0;
}

int main(void)
{
   int N;
   int arr[10];
    
   

}

