/*#include <iostream>
using namespace std;
int main() {
 float marks[] = {78.4, 90.6, 45.9, 72.2, 54.4};
 char names[][20] = {"Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha"};
 cout << "No" << "Name" << "Marks" << endl;
 for (int r = 0; r < 5; r++) {
     cout <<  r+1 
          <<  names[r]
          << marks[r] << endl;
 }
}
*/

#include <iomanip>
#include <iostream>

using namespace std;

int main(void) {

  float mark[5] = {78.4, 90.6, 45.9, 72.2, 54.4};
  char name[][20] = {"Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha"};

  //First row print
  cout << setw(5) << "No" << setw(15) << "Name" << setw(10) << "Marks" << endl;

  //print value 
  for (int n = 0; n < 5; n++) {
    cout << setw(5) << n + 1 << setw(15) << name[n] << setw(10)<< setiosflags(ios::fixed) << setprecision(2) << mark[n] << endl;
  }

  return 0;
}