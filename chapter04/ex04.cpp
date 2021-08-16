//privite 는 상속이 안됨 프라이빗성격을 가지고 상속하게 하는데 protected다
class Shape
{
protected:
    int x, y;

public:
    void draw() {}
    void move() {}
};
class Reactangle : public Shape
{
protected:
    int width;
    int height;

public:
    int calcArea()
    {
        return width * height;
    }
};