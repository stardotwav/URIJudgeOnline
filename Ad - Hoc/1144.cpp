#include <iostream>

using namespace std;

int main(){
  int n, i;

  cin >> n;

  for(i=1; i<n+1; i++){
    cout << i << " ";
    cout << i*i << " ";
    cout << i*i*i << endl;

    cout << i << " ";
    cout << (i*i) + 1 << " ";
    cout << (i*i*i) + 1 << endl;
  }
  return 0;
}