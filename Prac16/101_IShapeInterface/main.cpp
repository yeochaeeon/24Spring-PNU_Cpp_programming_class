//
// Created by codjs on 2024-05-22.
//
#include <iostream>
#include <vector>

class IShape {
public:
    virtual void draw() = 0;
    virtual ~IShape() {} ;
};
class GroupShape : public IShape {
public:
    GroupShape(std::string name):groupname_(name) {}
    void add(IShape* shape){ // IShape는 추상클래스 이므로
        shapes.push_back(shape);
    }
    void draw() override {
        std::cout << " Group Name: " << groupname_ << std::endl;
        for(IShape* s : shapes){
            s->draw();
        }
    }

private:
    std::string groupname_;
    std::vector<IShape*> shapes;
};

class Button : public IShape {
public:
    ~Button() {}
    void draw() override {
        std::cout << "Button is drawn!" << std::endl;
    }
};
class Table :public IShape {
public:
    ~Table(){};
    void draw() override {
        std::cout << "Table is drawn!" << std::endl;
    }
};
class Image : public IShape {
public:
    ~Image(){};
    void draw() override {
        std::cout << "Image is drawn!" << std::endl;
    }
};


int main() {

    GroupShape root("root"); //출력지점
    auto button1 = Button{};//출력지점
    root.add(&button1);

    auto sub1 = GroupShape("sub1");//출력지점
    auto button2 = Button{}; sub1.add(&button2);
    auto image1 = Image{}; sub1.add(&image1);
    auto table1 = Table{}; sub1.add(&table1);

    root.add(&sub1);
    root.draw();//출력지점

    return 0;

}