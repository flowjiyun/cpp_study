#include <iostream>

using namespace std;
// 개체가 생성될 때 마다 정적 멤버 변수를 사용하여 멤버 변수 업데이트 시켜줌
class Color
{
public:
    Color()
        : r(0)
        , g(0)
        , b(0)
        , id(idCounter++)
    {

    }
    Color(float r, float g, float b)
        : r(r)
        , g(g)
        , b(b)
        , id(idCounter++)
    {

    }

    static Color MixColors(Color a, Color b)
    {
        return Color((a.r + b.r) / 2, (a.g + b.g) / 2, (a.b + b.b) / 2);
    }

private:
    static int idCounter;

    int id;
    float r, g, b;
};

// static member initialize
int Color::idCounter = 1;

int main(void)
{
    Color red = Color(1, 0, 0);
    Color blue = Color(0, 0, 1);
    // static member function
    Color purple = Color::MixColors(red, blue);

    return (0);
}