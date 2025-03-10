#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, k, i, j, tmp;
  int score[1000];

  cin >> N >> k;

  for (i = 0; i < N; i++) 
    cin >> score[i];
    
  for (i = 0; i < N; i++) {
    for (j = 0; j < N - 1; j++) {
      if (score[j] < score[j + 1]) {
        tmp = score[j];
        score[j] = score[j + 1];
        score[j + 1] = tmp;
      }
    }
  }

  cout << score[k-1] << '\n';

  return 0;
}