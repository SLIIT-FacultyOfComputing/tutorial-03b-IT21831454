/*#include <iostream>

using namespace std;

int volume(int height, int width, int length);

// 1. Define a structure called Box
// have the integer data types Height, Width, Length

// Do not change the main function
int main() {
    // 2. Create a variable called box1 of the Box structure type
    // int box1Height, box1Width, box1Length;
    // 3. Create a variable called box2 of the Box structure type
    
    // int box2Height, box2Width, box2Length;
    int totalVolume;
    
    // 4. Input the height, width, lenght of box1 and box2
    cout << "Enter Box 1 Height : ";
    cin >> Height of Box 1;
    cout << "Enter Box 1 Width : ";
    cin >> Width of Box 1;
    cout << "Enter Box 1 Length : ";
    cin >> Length of Box 1;
    
    cout << "Enter Box 2 Height : ";
    cin >> Height of Box 2;
    cout << "Enter Box 2 Width : ";
    cin >> Width of Box 2;
    cout << "Enter Box 2 Length : ";
    cin >> Length of Box 2;
    
    // 5. Replace the coding below to pass the Box type structure
    totalVolume = volume( , , )
             + volume( , , );
    
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}

// Implement the functions here*/


#include <iostream>

using namespace std;

// function ProtoType
int volume(int height, int width, int length);

// create Box struct
struct Box {
  int height;
  int width;
  int length;
};

int main(void) {

  // create varible
  int totalVolume;

  // crate objects
  struct Box box1, box2;

  //Get user input
  cout << "Enter length, height, width of box 1 : ";
  cin >> box1.length >> box1.height >> box1.width;

  cout << "Enter length, height, width of box 2 : ";
  cin >> box2.length >> box2.height >> box2.width;

  //pass aregument to function
  totalVolume = volume(box1.height, box1.width, box1.length) +
                volume(box2.height, box2.width, box2.length);

  // printf Total volume of Boxs
  cout << "Volume of Box is : " << totalVolume << endl;

  return 0;
}
//function implimentation
int volume(int height, int width, int length) {
  return height * width * length;
}