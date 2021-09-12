// BFS �⺻

#include <iostream>
#include <string>
#include <algorithm>
#include <list>
#include <stack>
#include <Queue>
#include <vector>

using namespace std;

#define x first
#define y second

int main(void)
{
   ios::sync_with_stdio(0);
   cin.tie(0);

   // 1�� �Ķ� ĭ, 0�� ���� ĭ�� ����
   int board[101][101] =
   { {1,1,1,0,1,0,0,0,0,0},
     {1,0,0,0,1,0,0,0,0,0},
     {1,1,1,0,1,0,0,0,0,0},
     {1,1,0,0,1,0,0,0,0,0},
     {0,1,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0,0,0} }; 
   bool isVis[101][101];
   int n = 7, m = 10; // ���� ������

   int dx[4] = { 1,0,-1,0 };
   int dy[4] = { 0,1,0,-1 };

   queue<pair<int, int>> checkQ;
   isVis[0][0] = 1;
   checkQ.push({ 0,0 });

   while (checkQ.empty() == false)
   {
      pair<int, int> cur = checkQ.front();
      checkQ.pop();

      // ������ǥ ���
      cout << '(' << cur.x << ',' << cur.y << ") -> ";
      
      // �����¿� Ž��
      for(int dir = 0; dir < 4; dir++) // 4����
      {
         int nx = cur.x + dx[dir];
         int ny = cur.y + dy[dir];
         // ���� ���� ���α�
         if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;         
         // �̹� �湮 �߰ų� �Ķ�ĭ�ƴϸ� continue
         if (isVis[nx][ny] || board[nx][ny] != 1) continue;
         // ���� �湮�� ĭ�̸� 1�� üũ
         isVis[nx][ny] = 1;
         // �������� loop�� üũ�ؾ��ϴ� ����̴ϱ� push
         checkQ.push({ nx,ny });
      }
   }
}
