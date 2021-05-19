//
// Created by Kylian Lee on 2021/05/12.
//

#include <iostream>
#include <vector>

using namespace std;

bool makeMatrix(int num);
void printMatrix(vector<vector<int>> v, int n);

int main() {
  int caseNum;
  cin >> caseNum;
  for (int i = 0; i <caseNum; ++i) {
    int num;
    cin >> num;
    bool enable = makeMatrix(num);
    if(!enable)
      cout << -1 << endl;
  }
  return 0;
}

bool makeMatrix(int num){
  if(num == 2)
    return false;
  vector<vector<int>> matrix(num);
  for (int i = 0; i < num; ++i) {
    matrix[i].resize(num, 0);
  }
  int k = 1;
  int j;
  for (int i = 0; i < num; i++) {
    if(i % 2)
      j = 1;
    else
      j = 0;
    for (; j < num; j+=2) {
      matrix[i][j] = k++;
    }
  }
  for (int i = 0; i < num; ++i) {
    if(i % 2)
      j = 0;
    else
      j = 1;
    for (; j < num; j+=2) {
      matrix[i][j] = k++;
    }
  }

  printMatrix(matrix, num);
  return true;
}

void printMatrix(vector<vector<int>> v, int n){
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      cout << v[i][j] << " ";
    }
    cout << endl;
  }
}
