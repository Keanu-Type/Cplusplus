#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Shape{
    private:
    public:
        virtual void draw() = 0;
        virtual void rotate() = 0; //pure virtual functions
        virtual ~Shape(){}  //virtual destructor
};

class Open_Shape: public Shape{
    public:
        virtual ~Open_Shape(){

        }
};


class Closed_Shape: public Shape{
    public:
        virtual ~Closed_Shape(){

        }
};

//CONCRETE CLASS //this is connected to Open Shape, which is connected to Shape
class Line: public Open_Shape{ //this is connected to Open Shape, which is connected to Shape
    public:
    virtual void draw() override{
        std::cout<<"Draw Line"<<std::endl;
    }
    virtual void rotate(){
        std::cout<<"rotate line"<<std::endl; 
    }
        virtual ~Line(){

        }
};

class Circle: public Open_Shape{
    public:
    virtual void draw() override{
        std::cout<<"Draw cricel"<<std::endl;
    }
    virtual void rotate(){
        std::cout<<"rotate circlee"<<std::endl; 
    }
        virtual ~Circle(){

        }
};

class Square: public Open_Shape{
    public:
    virtual void draw() override{
        std::cout<<"Draw square"<<std::endl;
    }
    virtual void rotate(){
        std::cout<<"rotate rotate"<<std::endl; 
    }
        virtual ~Square(){

        }
};


int main(){

   // Shape s; //this will error. we are not allowed to instaniate them so i wont work.
   // Shape *ptr = new Shape(); //THATS BECAUSE they are abstract classes.
   // evevn the Open shape Class is inacessible
    
    Circle c;  //this will work. but this is not coming with a base class pointer
    c.draw();   //statically bount. its okay. but for creating abstract classes is sow
                  //we can come at this class heirarchy with base class pointer
    //MAIN HILIGHT
    cout<<"--------"<<endl;
    Shape *ptr = new Circle();
    ptr -> draw();
    ptr -> rotate(); //dynamic 
    //we are using pure virtual function
    Shape *s1 = new Circle();
    s1 ->draw();
    s1 ->rotate();
    Shape *s2 = new Square();
    s2 ->draw();
    s2 ->rotate();
    Shape *s3 = new Line();
    s3 ->draw();
    s3 ->rotate();
    cout<<"-----"<<endl;
    //VECTOR POINTER to array/vector of pointers of shapes
    std::vector<Shape*> collection{s1,s2,s3};
    for(const auto p:collection){
        p->draw();
    }
    delete s1;
    delete s2;
    delete s3;

    return 0; 
}