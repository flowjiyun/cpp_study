#pragma once
#include <iostream>
namespace samples
{
    class Vector
    {
        public:
            Vector();
            Vector(int x, int y);

            int GetX() const;
            void SetX(int x);

            int GetY() const;
            void SetY(int y);

            bool operator==(const Vector& rhs) const;
            bool IsEqual(const Vector& v) const;

            Vector operator*(const Vector& rhs) const;
            Vector operator*(int multiplier) const;
            friend Vector operator*(int multiplier, const Vector& v);
            Vector Multiply(const Vector& v) const; // 함수 오버로드
            Vector Multiply(int multiplier) const; // 함수 오버로드

            friend std::ostream& operator<<(std::ostream& out, const Vector& v);
            void Scale(const Vector& v);
            void Scale(int multiplier);

        private:
            int mX;
            int mY;
    };
}