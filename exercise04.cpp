/*#include <iostream>
using namespace std;

void print(int len, int wth);
void input(int len, int wth);

// Do not change the main() function
int main() {
   int length = 10, width = 5;
   input(length, width);
   print(length, width);
   return 0;
}

// Do not change the print() function
void print(int len, int wth) {
   cout << "Length : " << len 
        << ", Width  : " << wth << endl;
}

// Implement the Input Function here*/

#include <iostream>

using namespace std;

void print(int len, int wth);
void input(int &len, int &wth);
void input1(int len, int wth);

// Do not change the main() function
int main(void) {

  int length = 10, width = 5;

  cout << length <<" " << width<<endl;

  input(length, width);

  print(length, width);

  input1(length, width);

  cout << length <<" " << width<<endl;

  return 0;
}
// Implement the Input Function here

void print(int len, int wth) { cout << len << " " << wth << endl; }
void input(int &len, int &wth) {

  cout << "enter len and width : ";
  cin >> len >> wth;
}
// Do not change the print() function
void input1(int len, int wth) { cout << len << " " << wth << endl; }
