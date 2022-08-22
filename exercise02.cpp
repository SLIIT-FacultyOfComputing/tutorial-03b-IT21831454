/*#include <iostream>
using namespace std;

int volume(int height, int width, int length);

int main() {
    int box1Height, box1Width, box1Length;
    int box2Height, box2Width, box2Length;
    int totalVolume, totalSurface;
    
    cout << "Enter Box 1 Height : ";
    cin >> box1Height;
    cout << "Enter Box 1 Width : ";
    cin >> box1Width;
    cout << "Enter Box 1 Length : ";
    cin >> box1Length;
    
     cout << "Enter Box 2 Height : ";
    cin >> box2Height;
    cout << "Enter Box 2 Width : ";
    cin >> box2Width;
    cout << "Enter Box 2 Length : ";
    cin >> box2Length;
    
    totalVolume = volume(box1Height, box1Width, box1Length)
             + volume(box2Height, box2Width, box2Length);
             
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}

// Implement the Volume() function here*/


#include <iostream>
using namespace std;

int volume(int height, int width, int length);
int Surfac(int h, int w, int l);

int main(void) {
  int box1Height, box1Width, box1Length;
  int box2Height, box2Width, box2Length;
  int totalVolume, totalSurface;

  cout << "Enter Box 1 Height : ";
  cin >> box1Height;
  cout << "Enter Box 1 Width : ";
  cin >> box1Width;
  cout << "Enter Box 1 Length : ";
  cin >> box1Length;

  cout << "Enter Box 2 Height : ";
  cin >> box2Height;
  cout << "Enter Box 2 Width : ";
  cin >> box2Width;
  cout << "Enter Box 2 Length : ";
  cin >> box2Length;

  totalVolume = volume(box1Height, box1Width, box1Length) +
                volume(box2Height, box2Width, box2Length);

  cout << "Volume of Box is " << totalVolume << endl;

  totalSurface = Surfac(box1Height, box1Width, box1Length)+
    Surfac(box2Height, box2Width, box2Length);

  cout<<"Total Surface is : "<<totalSurface;
    
  

  return 0;
}

// Implement the Volume() function here
int volume(int height, int width, int length) {
  return height * width * length;
}
int Surfac(int h, int w, int l) { 
  
  return (2*l*w) + (2*l*h) + (2*w*h);
}