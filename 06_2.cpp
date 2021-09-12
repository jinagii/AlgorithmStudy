// 1926 : 그림

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

   int maxPicSize = 0; // 그림의 사이즈
   int picNum = 0; // 그림의 개수

   int n, m; // 1~500
   int board[111][111] = { 0, };
   bool isVis[111][111] = { 0, };

   queue<pair<int, int>> cheQ;
   int dx[4] = { 0,1,0,-1 };
   int dy[4] = { 1,0,-1,0 };

   cin >> n >> m; // 그림 입력
   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < m; j++)
      {
         cin >> board[i][j];
      }
   }
      
   // 모든 보드를 순환한다
   for (int i = 0; i < n; i++) 
   {
      for (int j = 0; j < m; j++)
      {
         // 그림이 없거나 읽은곳이면 패스
         if(board[i][j] == 0||isVis[i][j] == true) continue;
         
         picNum++; // 그림 수 증가
         queue<pair<int, int>> Q; // 그림의 크기를 확인할 큐
         isVis[i][j] = true; // 방문 했으니 true로 바꿈
         Q.push({ i,j }); // 동서남북으로 확인 할 중점
         int picSize = 0; // 그림 넓이

         while (Q.empty() == false)
         {
            picSize++; // 한 칸 더 존재하니 그림 크기 ++
            pair<int, int> cur = Q.front(); // 현재 위치
            Q.pop(); 
            // 4방을 확인하는 for문 (외우자)
            for (int dir = 0; dir < 4; dir++)
            {
               int nx = cur.x + dx[dir]; // 4방칸들
               int ny = cur.y + dy[dir];

               // 범위 벗어나면 패스
               if (nx < 0 || nx >= n || ny < 0 || ny >= m)continue;
               // 읽은 곳이거나 그림이 없으면 패스
               if (isVis[nx][ny] == true || board[nx][ny] != 1)continue;

               isVis[nx][ny] = true; // 방문한곳이니 true로 바꿈
               Q.push({ nx,ny }); // 처음 방문 했으니 여기서도 4방을 조사해야하므로 Q에 push
            }
         }
         // 최대 그림사이즈 갱신
         maxPicSize = max(maxPicSize, picSize);
      }
   }
   cout << picNum << '\n' << maxPicSize;
}

