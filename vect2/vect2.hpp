#ifndef VECT2_HPP
# define VECT2_HPP
# include <iostream>
# include <string>

class vect2 {
    int x, y;
public:
    vect2();
    vect2(int x, int y);
    vect2(const vect2& src);
    vect2& operator=(const vect2& rhs);
    int getX() const;
    int getY() const;

    bool operator==(const vect2& rhs) const;
    bool operator!=(const vect2& rhs) const;
    bool operator<(const vect2& rhs) const;
    bool operator>(const vect2& rhs) const;
    bool operator<=(const vect2& rhs) const;
    bool operator>=(const vect2& rhs) const;
    vect2 operator+(const vect2& rhs) const;
    vect2 operator+(int scalar) const;
    vect2& operator+=(const vect2& rhs);
    vect2& operator+=(int scalar);
    vect2& operator++();
    vect2 operator++(int);
    vect2 operator-(const vect2& rhs) const;
    vect2 operator-(int scalar) const;
    vect2 operator-();
    vect2& operator-=(const vect2& rhs);
    vect2& operator-=(int scalar);
    vect2& operator--();
    vect2 operator--(int);
    vect2 operator*(const vect2& rhs) const;
    vect2 operator*(int scalar) const;
    vect2& operator*=(const vect2& rhs);
    vect2& operator*=(int scalar);
    vect2 operator/(const vect2& rhs) const;
    vect2 operator/(int scalar) const;
    vect2& operator/=(const vect2& rhs);
    vect2& operator/=(int scalar);
};

vect2 operator*(int scalar, const vect2& rhs);
std::ostream& operator<<(std::ostream& out, const vect2& rhs);

#endif