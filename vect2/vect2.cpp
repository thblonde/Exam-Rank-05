#include "vect2.hpp"

vect2::vect2()
: x(0), y(0) {}

vect2::vect2(int x, int y)
: x(x), y(y) {}

vect2::vect2(const vect2& src)
{
    *this = src;
}

vect2& vect2::operator=(const vect2& rhs)
{
    if (this != &rhs) {
        this->x = rhs.getX();
        this->y = rhs.getY();
    }
    return *this;
}

vect2::~vect2() {}

int vect2::getX() const
{
    return this->x;
}

int vect2::getY() const
{
    return this->y;
}

bool vect2::operator==(const vect2& rhs) const
{
    return this->x == rhs.getX() && this->y == rhs.getY();
}

bool vect2::operator!=(const vect2& rhs) const
{
    return !(this->x == rhs.getX() && this->y == rhs.getY());
}

bool vect2::operator<(const vect2& rhs) const
{
    if (this->x != rhs.getX())
        return this->x < rhs.getX();
    return this->y < rhs.getY();
}

bool vect2::operator>(const vect2& rhs) const
{
    return rhs < *this;
}

bool vect2::operator<=(const vect2& rhs) const
{
    return !(*this > rhs);
}

bool vect2::operator>=(const vect2& rhs) const
{
    return !(*this < rhs);
}

vect2 vect2::operator+(const vect2& rhs) const
{
    return vect2(this->x + rhs.getX(), this->y + rhs.getY());
}

vect2 vect2::operator+(int scalar) const
{
    return vect2(this->x + scalar, this->y + scalar);
}

vect2& vect2::operator+=(const vect2& rhs) 
{
    this->x += rhs.getX();
    this->y += rhs.getY();
    return *this;
}

vect2& vect2::operator+=(int scalar)
{
    this->x += scalar;
    this->y += scalar;
    return *this;
}

vect2& vect2::operator++()
{
    this->x++;
    this->y++;
    return *this;
}

vect2 vect2::operator++(int)
{
    vect2 tmp(*this);

    this->x++;
    this->y++;
    return tmp;
}

vect2 vect2::operator-(const vect2& rhs) const
{
    return vect2(this->x - rhs.getX(), this->y - rhs.getY());
}

vect2 vect2::operator-(int scalar) const
{
    return vect2(this->x - scalar, this->y - scalar);
}

vect2 vect2::operator-() const
{
    return vect2(-(this->x), -(this->y));
}

vect2& vect2::operator-=(const vect2& rhs) 
{
    this->x -= rhs.getX();
    this->y -= rhs.getY();
    return *this;
}

vect2& vect2::operator-=(int scalar)
{
    this->x -= scalar;
    this->y -= scalar;
    return *this;
}

vect2& vect2::operator--()
{
    this->x--;
    this->y--;
    return *this;
}

vect2 vect2::operator--(int)
{
    vect2 tmp(*this);

    this->x--;
    this->y--;
    return tmp;
}

vect2 vect2::operator*(const vect2& rhs) const
{
    return vect2(this->x * rhs.getX(), this->y * rhs.getY());
}

vect2 vect2::operator*(int scalar) const
{
    return vect2(this->x * scalar, this->y * scalar);
}

vect2& vect2::operator*=(const vect2& rhs) 
{
    this->x *= rhs.getX();
    this->y *= rhs.getY();
    return *this;
}

vect2& vect2::operator*=(int scalar)
{
    this->x *= scalar;
    this->y *= scalar;
    return *this;
}

vect2 vect2::operator/(const vect2& rhs) const
{
    return vect2(this->x / rhs.getX(), this->y / rhs.getY());
}

vect2 vect2::operator/(int scalar) const
{
    return vect2(this->x / scalar, this->y / scalar);
}

vect2& vect2::operator/=(const vect2& rhs) 
{
    this->x /= rhs.getX();
    this->y /= rhs.getY();
    return *this;
}

vect2& vect2::operator/=(int scalar)
{
    this->x /= scalar;
    this->y /= scalar;
    return *this;
}

vect2 operator+(int scalar, const vect2& rhs)
{
    return vect2(scalar + rhs.getX(), scalar + rhs.getY());
}

vect2 operator-(int scalar, const vect2& rhs)
{
    return vect2(scalar - rhs.getX(), scalar - rhs.getY());
}

vect2 operator*(int scalar, const vect2& rhs)
{
    return vect2(scalar * rhs.getX(), scalar * rhs.getY());
}

vect2 operator/(int scalar, const vect2& rhs)
{
    return vect2(scalar / rhs.getX(), scalar / rhs.getY());
}

std::ostream& operator<<(std::ostream& out, const vect2& rhs)
{
    out << "{" << rhs.getX() << ", " << rhs.getY() << "}";
    return out;
}
