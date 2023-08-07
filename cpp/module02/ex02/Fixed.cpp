#include "Fixed.hpp"

Fixed::Fixed()
{
	fixed = 0;
}

Fixed::Fixed(const int f)
{
	fixed = f << 8;
}

Fixed::Fixed(const Fixed &a)
{
	*this = a;
}

Fixed::~Fixed()
{
}

int Fixed::getRawBits() const
{
	return (fixed);
}

void Fixed::setRawBits(int const raw)
{
	fixed = raw;
}

std::ostream &operator<<(std::ostream &ret, const Fixed &a)
{
	ret << a.toFloat();
	return (ret);
}

float Fixed::toFloat(void) const
{
	return (float)fixed / (1 << num_bit);
}

Fixed::Fixed(const float n)
{
	fixed = roundf(n * (1 << num_bit));
}

int Fixed::toInt(void) const
{
    return (fixed >> num_bit);
}

Fixed& Fixed::operator=(const Fixed& obj)
{
    this->fixed = obj.getRawBits();
    return (*this);
}

bool Fixed::operator<(const Fixed& a) const
{
    return (this->getRawBits() < a.getRawBits());
}
bool Fixed::operator>(const Fixed& a) const
{
    return (this->getRawBits() > a.getRawBits()); 
}
bool Fixed::operator==(const Fixed& a)
{
    return (this->getRawBits() == a.getRawBits());  
}
bool Fixed::operator<=(const Fixed& a)
{
    return (this->getRawBits() <= a.getRawBits()); 
}
bool Fixed::operator>=(const Fixed& a)
{
    return this->getRawBits() >= a.getRawBits();
}
bool Fixed::operator!=(const Fixed& a)
{
    return this->getRawBits() != a.getRawBits();
        
}
Fixed Fixed::operator+(const Fixed& a)
{
    int i = this->fixed + a.getRawBits();
    Fixed b;
    b.setRawBits(i);
    return(b);
}
Fixed Fixed::operator-(const Fixed& a)
{
    int i = this->fixed - a.getRawBits();
    Fixed b;
    b.setRawBits(i);
    return(b);
}
Fixed Fixed::operator*(const Fixed& a)
{
    int i = (this->fixed) * a.toFloat();
    Fixed b;
    b.setRawBits(i);
    return(b);
}
Fixed Fixed::operator/(const Fixed& a)
{
    int i = (this->fixed * 256) / a.getRawBits();
    Fixed b;
    b.setRawBits(i);
    return(b);
}
Fixed& Fixed::operator++()
{
    ++fixed;
    return(*this);
}
Fixed Fixed::operator++(int)
{
    Fixed newf;
    newf.setRawBits(fixed);
    fixed++;
    return(newf);
}
Fixed& Fixed::operator--()
{
    --fixed;
    return(*this);
}
Fixed Fixed::operator--(int)
{
    Fixed newf(fixed);
    newf.setRawBits(fixed);
    fixed--;
    return(newf);
}
Fixed Fixed::max(Fixed& a, Fixed& b)
{
    if(a.getRawBits() > b.getRawBits())
        return a;
    else
        return b;
}
Fixed Fixed::min(Fixed& a, Fixed& b)
{
    if(a < b)
        return a;
    else
        return b;
}

Fixed Fixed::min(const Fixed& a, const Fixed& b)
{
    if(a < b)
        return a;
    else
        return b;
}

Fixed Fixed::max(const Fixed& a, const Fixed& b)
{
    if(a > b)
        return a;
    else
        return b;
}
