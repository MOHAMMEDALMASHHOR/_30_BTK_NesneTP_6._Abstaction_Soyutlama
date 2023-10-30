/* #include <iostream>
using std::string;
using std::cout;
using std::endl;

/*abstract*//*class Shape{ //we sppoused to add abstract before the class name but in C++ we don't
public:
    virtual void draw(){ /*  virtual void draw() = 0 if we want to create a func. without any code just like pass in python*//*

    }

};

int main(){
    Shape item1 = Shape();
    item.draw(); 

    char c = getchar();
    return 0;
} */

//create the class 
/*
#include <iostream>
using std::string;
using std::cout;
using std::endl;

/*abstract*//*class Shape{ //we sppoused to add abstract before the class name but in C++ we don't
public:
    virtual void draw(){ /*  virtual void draw() = 0 if we want to create a func. without any code just like pass in python*//*

    }

};

class Triangle : public Shape{
public:
    void draw() override{
        std::<<cout<<"The triagnel has been drwan."<<std::endl;
    }
};

int main(){
    // Shape item1 = Shape();
    // item.draw(); 
    Triangle item1 = Triangle();
    item1.draw();

    char c = getchar();
    return 0;
}
*/

// Souyt sinif tanimlama

// #include <iostream>
// using std::string;
// using std::cout;
// using std::endl;

// class Shape{ 
// protected:
//     int x;
//     int y;
// public:
//     int getY(){
//         return x;
//     }
    
//     int getX(){
//         return y;
//     }
//     void setX(int value){
//         x=value;
//     }
//     void setY(int value){
//         y=value;
//     }
//     Shape(){
        
//     }
//     Shape(int x, int y):Shape(){
//         this->x=x;
//         this->y=y;
        
//     }
//     virtual void draw(){ 

//     }

// };

// class Triangle : public Shape{
// public:
//     Triangle():Shape()
//     {
        
//     }
//     Triangle(int x, int y):Shape(x,y){
        
//     }
    
//     void draw() override{
//         std::cout<<"The triagnel has been drwan."<<std::endl;
//     }
// };

// int main(){
//     // Shape item1 = Shape();
//     // item.draw(); 
//     Triangle item1 = Triangle();
//     item1.draw();
//     Triangle item2 = Triangle(2,4);

//     char c = getchar();
//     return 0;
// }

//modifying the code

// #include <iostream>
// using std::string;
// using std::cout;
// using std::endl;

// class Shape{ 
// protected:
//     int x;
//     int y;
// public:
//     int getY(){
//         return x;
//     }
    
//     int getX(){
//         return y;
//     }
//     void setX(int value){
//         x=value;
//     }
//     void setY(int value){
//         y=value;
//     }
//     Shape(){
        
//     }
//     Shape(int x, int y):Shape(){
//         this->x=x;
//         this->y=y;
        
//     }
//     virtual void draw(){ 

//     }

// };

// class Triangle : public Shape{
// public:
//     Triangle():Shape()
//     {
//        x=0;
//        y=0;
//     }
//     Triangle(int x, int y):Shape(x,y){
        
//     }
    
//     void draw() override{
//         std::cout<<"The triagnel has been drwan.components: X= "<<x<<","<<" Y= "<<y<<std::endl;
//     }
// };
// class Rectangle: public Shape{//you have to make it public because it is an abstract
// public:
//     Rectangle():Shape(){
        
//     }
//     void draw() override{
//         std::cout<<"The rectangle has been drawn with this components: X= "<<x<<","<<" Y= "<<y<<std::endl; 
        
//     }
//     Rectangle(int x, int y):Shape(x,y){
        
//     }
  
// };

// int main(){
//     // Shape item1 = Shape();
//     // item.draw(); 
//     Triangle item1 = Triangle();
//     item1.setX(2);
//     item1.setY(3);
//     item1.draw();
//     Triangle item2 = Triangle(2,4);
//     Rectangle item3 = Rectangle(6,8);
//     item3.draw();

//     char c = getchar();
//     return 0;
// }

//Adding the Square class and make it inhert from the rectangle class and just give it one parametre

#include <iostream>
using std::string;
using std::cout;
using std::endl;

class Shape{ 
protected:
    int x;
    int y;
public:
    int getY(){
        return x;
    }
    
    int getX(){
        return y;
    }
    void setX(int value){
        x=value;
    }
    void setY(int value){
        y=value;
    }
    Shape(){
        
    }
    Shape(int x, int y):Shape(){
        this->x=x;
        this->y=y;
        
    }
    virtual void draw(){ 

    }

};

class Triangle : public Shape{
public:
    Triangle():Shape()
    {
       x=0;
       y=0;
    }
    Triangle(int x, int y):Shape(x,y){
        
    }
    
    void draw() override{
        std::cout<<"The triagnel has been drwan.components: X= "<<x<<","<<" Y= "<<y<<std::endl;
    }
};
class Rectangle: public Shape{//you have to make it public because it is an abstract
public:
    Rectangle():Shape(){
        
    }
    void draw() override{
        std::cout<<"The rectangle has been drawn with this components: X= "<<x<<","<<" Y= "<<y<<std::endl; 
        
    }
    Rectangle(int x, int y):Shape(x,y){
        
    }
  
};

class Square:public Rectangle{
public:
    Square():Rectangle(){
        
    }
    Square(int x):Rectangle(x,x){
        
    }
    void draw() override{
        std::cout<<"The Square has been drawn with this components: X= "<<x<<","<<" Y= "<<y<<std::endl;
    }
};

int main(){
    // Shape item1 = Shape();
    // item.draw(); 
    Triangle item1 = Triangle();
    item1.setX(2);
    item1.setY(3);
    item1.draw();
    Triangle item2 = Triangle(2,4);
    Rectangle item3 = Rectangle(6,8);
    item3.draw();
    Square item4 = Square(7);
    item4.draw();
    

    char c = getchar();
    return 0;
}