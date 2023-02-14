#include <iostream>
using namespace std;

class Square {
private: int side;
public: 
  Square(){
    side=0;
  }
  Square(int s){
    setSide(s);
  }
  int getSide(){          //accessor
    return side;
  }
  void setSide(int s){
    side=s;
  }
  int calcArea(){
    return side*side;
  }
  int calcPerimeter(){
    int perimeter=side*4;
    return perimeter;
  } 
};

int main() {
  int a;
  Square s1,s2(5);
  cout << "\ns1 side="<<s1.getSide();
  cout << "\ns2 side="<<s2.getSide();
  s1.setSide(10);
  s2.setSide(20);
  
  cout << "\ns1 side="<<s1.getSide();
  cout << "\nArea of s1 is: "<<s1.calcArea();
  cout << "\nPreimeter of s1 is: "<<s1.calcPerimeter();
  cout << "\ns2 side="<<s2.getSide();
  cout << "\nArea of s1 is: "<<s2.calcArea();
  
}