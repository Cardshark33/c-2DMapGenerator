#pragma once
#include <corecrt_math.h>


namespace MathLbry
{
    class Vector2
    {
    public:
        float X = 0;
        float Y = 0;

        Vector2() { X = 0; Y = 0; }

        Vector2(float x, float y)
        {
            X = x;
            Y = y;
        }

        ~Vector2() {};

        float Magnitude()
        {
            return sqrtf(X * X + Y * Y);
        }

        Vector2 GetNormalised()
        {
            return Vector2(X / Magnitude(), Y / Magnitude());
        }
#pragma region operators1
#pragma region +=
        void operator+=(const Vector2& a)
        {
            X += a.X;
            Y += a.Y;
        }
#pragma endregion
#pragma region -=
        void operator-=(const Vector2& a)
        {
            X -= a.X;
            Y -= a.Y;
        }
#pragma endregion
#pragma region *=
        void operator*=(const float a)
        {
            X *= a;
            Y *= a;
        }
#pragma endregion
#pragma region /=
        void operator/=(const float a)
        {
            X /= a;
            Y /= a;
        }
#pragma endregion
#pragma region ==
        bool operator==(const Vector2& a)
        {
            if (X == a.X && Y == a.Y)
                return true;

            return false;
        }
#pragma endregion
#pragma region !=
        bool operator!=(const Vector2& a)
        {
            if (X != a.X || Y != a.Y)
                return true;

            return false;
        }
#pragma endregion
#pragma endregion
    };

#pragma region operators2
#pragma region +
    static Vector2 operator +(const Vector2& a, const Vector2& b)
    {
        return Vector2(a.X + b.X, a.Y + b.Y);
    }
#pragma endregion

#pragma region -

    static Vector2 operator- (const Vector2& a, const Vector2& b)
    {
        return Vector2(a.X - b.X, a.Y - b.Y);
    }

#pragma endregion

#pragma region /

    static Vector2 operator/(const Vector2& a, const float b)
    {
        return Vector2(a.X / b, a.Y / b);
    }

    static Vector2 operator/(const float a, const Vector2& b)
    {
        return Vector2(a / b.X, a / b.Y);
    }

#pragma endregion

#pragma region *

    static Vector2 operator*(const Vector2& a, const float b)
    {
        return Vector2(a.X * b, a.Y * b);
    }

    static Vector2 operator*(const float a, const Vector2& b)
    {
        return Vector2(a * b.X, a * b.Y);
    }

#pragma endregion

#pragma endregion
}
