#include <iostream>
using namespace std;
int main() {
  int n, Min, Max;
  int countmax = 0, countmin = 0;
  int *score;

  cout << "Enter the number of matches" << endl;
  cin >> n;

  score = new int[n];

  cout << "enter the score" << endl;
  for (int i = 0; i < n; i++) {

    cin >> score[i];
  }
  Min = Max = score[0];
  for (int i = 1; i < n; i++) {
    if (score[i] > Max) {
      Max = score[i];
      countmax++;
    }
    if (score[i] < Min) {
      Min = score[i];
      countmin++;
    }
  }
  cout << countmax << " " << countmin << endl;
  return 0;
}

