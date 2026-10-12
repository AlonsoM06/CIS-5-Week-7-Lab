#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// Lab 7 — Alonso Martinez 
// CIS 5 Week 07 · Two arrays

int main() {
  const int N = 5;
  int quiz[N]= {4,15,21,47,67} ;
  cout << "For Loop" << endl;
  int sum = 0;
  int hi= quiz[0];
  for (int i = 0; i < N; i++) {
  cout << "[" << i << "]" << quiz [i]  << endl;
  sum += quiz[i];
  if (quiz [i] > hi) {
    hi=quiz[i];
  }
}
  cout << "Sum: " << sum << endl;
  cout << "High: " << hi << endl;


  int lab[N]= {89,25,13,39,99} ;
  cout << "For Lab" << endl; 
  sum = 0;
  hi = lab[0];
  for (int i = 0; i < N; i++) {
  cout << "[" << i << "]" << lab[i] << endl;

  sum += lab[i];
  if (lab [i] > hi) {
    hi=lab[i];
  }
}
cout << "Sum: " << sum << endl;
cout << "High: " << hi << endl;

  return 0;
}








  