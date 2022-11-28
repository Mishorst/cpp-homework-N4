#include <iostream>

using namespace std;

class rectangle{
  private:
    float length, width;
    
  public:
    
    void setLength(float l){
        length = l;
    }
    
    float getLength(){
        return length;
    }
    
    void setWidth(float w){
        width = w;
    }
    
    float getWidth(){
        return width;
    }
    
    float perimeter(){
        return 2 * length + 2 * width;
    }
};

int main()
{
    float a, b;
    rectangle peri;
    
    cout << "Enter rectangle's length and width" << endl;
    cin >> a >> b;
    
    peri.setLength(a);
    peri.setWidth(b);
    
    cout << "Rectangle's length is: " << peri.getLength() << endl;
    cout << "Rectangle's width is: " << peri.getWidth() << endl;
    cout << "Perimeter of the rectangle is: " << peri.perimeter() << endl;
    

    return 0;
}