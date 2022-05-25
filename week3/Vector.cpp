#include <iostream>
#include "Vector.h"

namespace samples
{
    Vector::Vector()
        :mX(0)
        ,mY(0)
    {    
    }

    Vector::Vector(int x, int y)
        :mX(x)
        ,mY(y)
    {
    }

    int Vector::GetX() const
    {
        return mX;    
    }
    int Vector::GetY() const
    {
        return mY;    
    }

    void Vector::SetX(int x)
    {
        mX = x;
    }
    void Vector::SetY(int y)
    {
        mY = y;
    }

    bool Vector::IsEqual(const Vector& v) const
    {
        return (mX == v.mX && mY == v.mY);
    }

    Vector Vector::Multiply(const Vector& v) const
    {
        Vector result(mX * v.GetX(), mY * v.GetY());
        return (result);
    }
    Vector Vector::Multiply(int multiplier) const
    {
        Vector result(mX * multiplier, mY * multiplier);
        return (result);
    }

    void Vector::Scale(const Vector& v)
    {
        mX = mX * v.mX;
        mY = mY * v.mY;
    }

    void Vector::Scale(int multiplier)
    {
        mX = mX * multiplier;
        mY = mY * multiplier;           
    }

}