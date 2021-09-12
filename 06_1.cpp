// BFS 기본

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

   // 1이 파란 칸, 0이 빨간 칸에 대응
   int board[101][101] =
   { {1,1,1,0,1,0,0,0,0,0},
     {1,0,0,0,1,0,0,0,0,0},
     {1,1,1,0,1,0,0,0,0,0},
     {1,1,0,0,1,0,0,0,0,0},
     {0,1,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0,0,0} }; 
   bool isVis[101][101];
   int n = 7, m = 10; // 보드 사이즈

   int dx[4] = { 1,0,-1,0 };
   int dy[4] = { 0,1,0,-1 };

   queue<pair<int, int>> checkQ;
   isVis[0][0] = 1;
   checkQ.push({ 0,0 });

   while (checkQ.empty() == false)
   {
      pair<int, int> cur = checkQ.front();
      checkQ.pop();

      // 현재좌표 출력
      cout << '(' << cur.x << ',' << cur.y << ") -> ";
      
      // 상하좌우 탐색
      for(int dir = 0; dir < 4; dir++) // 4방향
      {
         int nx = cur.x + dx[dir];
         int ny = cur.y + dy[dir];
         // 보드 내로 가두기
         if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;         
         // 이미 방문 했거나 파란칸아니면 continue
         if (isVis[nx][ny] || board[nx][ny] != 1) continue;
         // 지금 방문한 칸이면 1로 체크
         isVis[nx][ny] = 1;
         // 다음으로 loop에 체크해야하는 방들이니까 push
         checkQ.push({ nx,ny });
      }
   }
}
