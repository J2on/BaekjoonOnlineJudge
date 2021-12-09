#include <iostream>
#include <cmath>
using namespace std;

/*
  BaekJoon_11729 하노이 탑 이동 순서
  
  https://ko.wikipedia.org/wiki/%ED%95%98%EB%85%B8%EC%9D%B4%EC%9D%98_%ED%83%91
  솔직히 이해는 했는데 다른 방식으로 풀 자신이 없다
*/

void hanoi(int n, int start, int to, int bypass)
{
    if(n == 1)
        cout << start << ' ' << to << "\n";
    else
    {
        hanoi(n-1,start,bypass,to);
        cout << start << ' ' << to << "\n";
        hanoi(n-1,bypass,to,start);
    }
}

int main() {
  int numN;
  cin >> numN;
  cout << (int)pow(2,numN) -1 << "\n";
  
  int index;
  hanoi(numN,1,3,2);
}  