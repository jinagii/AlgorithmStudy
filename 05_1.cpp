

#include <iostream>
#include <stack>
#include <string>
#include <queue>
#include <deque>


using namespace std;

int main(void)
{
   int N; // ť�� ũ��
   int M; // �������� ���� ����

   int moves = 0;
   int cursor = 1;

   queue<int> numbers;

   cin >> N >> M;

   while (M-- > 0)
   {
      int num;
      cin >> num;
      numbers.push(num);
   }

   while (!numbers.empty())
   {

   }

   cout << moves;
}
