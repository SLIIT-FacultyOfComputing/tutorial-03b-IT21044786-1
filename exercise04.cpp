#include <iostream>
using namespace std;

void print(int len, int wth);
void input(int &length2, int &width2);

// Do not change the main() function
int main() {
   int length = 10, width = 5;
   int length2, width2;
   cout << "Length is:";
   cin >> length2;
   cout << "Width is:";
   cin >> width2;

   input(length2, width2);
   print(length, width);
   return 0;
}

// Do not change the print() function
void print(int len, int wth) {
   cout << "Length : " << len 
        << ", Width  : " << wth << endl;
}
void input(int& length2, int& width2) {
    cout << "Length : " << length2
        << ", Width  : " << width2 << endl;
}