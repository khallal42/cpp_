#include "Fixed.hpp"

Fixed::Fixed()
{
	fixed = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int f)
{
	std::cout << "Int constructor called" << std::endl;
	fixed = f * (1 << num_bit);
}

Fixed::Fixed(const Fixed &a)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = a;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
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
	std::cout << "Float constructor called" << std::endl;
	fixed = roundf(n * (1 << num_bit));
}

int Fixed::toInt(void) const
{
    return (fixed >> num_bit);
}

Fixed& Fixed::operator=(const Fixed& obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixed = obj.getRawBits();
    return (*this);
}
