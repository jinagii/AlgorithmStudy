// 1926 : �׸�

#include <iostream>
#include <string>
#include <algorithm>
#include <list>
#include <stack>
#include <queue>
#include <vector>

using namespace std;

#define x first
#define y second

int main(void)
{
   ios::sync_with_stdio(0);
   cin.tie(0);

   int maxPicSize = 0; // �׸��� ������
   int picNum = 0; // �׸��� ����

   int n, m; // 1~500
   int board[111][111] = { 0, };
   bool isVis[111][111] = { 0, };

   queue<pair<int, int>> cheQ;
   int dx[4] = { 0,1,0,-1 };
   int dy[4] = { 1,0,-1,0 };

   cin >> n >> m; // �׸� �Է�
   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < m; j++)
      {
         cin >> board[i][j];
      }
   }
      
   // ��� ���带 ��ȯ�Ѵ�
   for (int i = 0; i < n; i++) 
   {
      for (int j = 0; j < m; j++)
      {
         // �׸��� ���ų� �������̸� �н�
         if(board[i][j] == 0||isVis[i][j] == true) continue;
         
         picNum++; // �׸� �� ����
         queue<pair<int, int>> Q; // �׸��� ũ�⸦ Ȯ���� ť
         isVis[i][j] = true; // �湮 ������ true�� �ٲ�
         Q.push({ i,j }); // ������������ Ȯ�� �� ����
         int picSize = 0; // �׸� ����

         while (Q.empty() == false)
         {
            picSize++; // �� ĭ �� �����ϴ� �׸� ũ�� ++
            pair<int, int> cur = Q.front(); // ���� ��ġ
            Q.pop(); 
            // 4���� Ȯ���ϴ� for�� (�ܿ���)
            for (int dir = 0; dir < 4; dir++)
            {
               int nx = cur.x + dx[dir]; // 4��ĭ��
               int ny = cur.y + dy[dir];

               // ���� ����� �н�
               if (nx < 0 || nx >= n || ny < 0 || ny >= m)continue;
               // ���� ���̰ų� �׸��� ������ �н�
               if (isVis[nx][ny] == true || board[nx][ny] != 1)continue;

               isVis[nx][ny] = true; // �湮�Ѱ��̴� true�� �ٲ�
               Q.push({ nx,ny }); // ó�� �湮 ������ ���⼭�� 4���� �����ؾ��ϹǷ� Q�� push
            }
         }
         // �ִ� �׸������� ����
         maxPicSize = max(maxPicSize, picSize);
      }
   }
   cout << picNum << '\n' << maxPicSize;
}

