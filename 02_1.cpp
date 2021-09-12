// 연결리스트 공부

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// 아래와 같이 구현되어있음
struct NODE
{
   struct NODE* Prev;
   struct NODE* Next;

   int data;
};

// 야매...?! 구현법?
const int MX = 1000;
int Prev[MX];
int Next[MX];
int Data[MX];
int unUsed = 1;

void Insert(int addr, int num)
{
   Data[unUsed] = num;
   Prev[unUsed] = addr;
   Next[unUsed] = Next[addr];

   if (Next[addr] != -1)
   {
      Prev[Next[addr]] = unUsed;
   }

   Next[addr] = unUsed;

   unUsed++;
}

void Erase(int addr)
{
   Next[Prev[addr]] = Next[addr];
   if (Next[addr] != -1)
   {
      Prev[Next[addr]] = Prev[addr];
   }
}

void Traverse()
{
   int cur = Next[0];

   while (cur != -1)
   {
      cout << Data[cur] << ' ';

      cur = Next[cur];
   }

   cout << "\n\n";
}

void insert_test()
{
   cout << "****** insert_test *****\n";
   Insert(0, 10); // 10(address=1)
   Traverse();
   Insert(0, 30); // 30(address=2) 10
   Traverse();
   Insert(2, 40); // 30 40(address=3) 10
   Traverse();
   Insert(1, 20); // 30 40 10 20(address=4)
   Traverse();
   Insert(4, 70); // 30 40 10 20 70(address=5)
   Traverse();
}

void erase_test()
{
   cout << "****** erase_test *****\n";
   Erase(1); // 30 40 20 70
   Traverse();
   Erase(2); // 40 20 70
   Traverse();
   Erase(4); // 40 70
   Traverse();
   Erase(5); // 40
   Traverse();
}

int main(void)
{
   fill(Prev, Prev + MX, -1);
   fill(Next, Next + MX, -1);
   insert_test();
   erase_test();
}