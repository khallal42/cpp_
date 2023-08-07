#include "Fixed.hpp"

Fixed::Fixed()
{
    fixed = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int f)
{
    fixed = f  << num_bit;
}

Fixed::Fixed(const Fixed& a)
{
    std::cout << "Copy constructor called" << std::endl;
    this->fixed = a.getRawBits();
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (fixed);
}

void    Fixed::setRawBits(int const raw)
{
    fixed = raw;
}

Fixed& Fixed::operator=(const Fixed& obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixed = obj.getRawBits();
    return (*this);
}
