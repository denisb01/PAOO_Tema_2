#include "simple_numbers.hpp"

/* Numbers class */

void simple_numbers::Numbers::print()
{
    std::cout << "Just a simple number class!" << std::endl;
}

/* Real Number class */

simple_numbers::RealNumber::RealNumber()
{
    this->realValue = 0;
}

simple_numbers::RealNumber::RealNumber(double r)
{
    this->realValue = r;
}

void simple_numbers::RealNumber::add(simple_numbers::RealNumber other)
{
    this->realValue += other.realValue;
}

void simple_numbers::RealNumber::subtract(simple_numbers::RealNumber other)
{
    this->realValue -= other.realValue;
}

void simple_numbers::RealNumber::print() 
{
    std::cout << "Real number is: " << this->realValue << std::endl;
}

/* Complex Number class */

simple_numbers::ComplexNumber::ComplexNumber()
{
    this->realValue = 0;
    this->imaginaryValue = 0;
}

simple_numbers::ComplexNumber::ComplexNumber(double r, double i)
{
    this->realValue = r;
    this->imaginaryValue = i;
}

void simple_numbers::ComplexNumber::add(simple_numbers::ComplexNumber other)
{
    this->realValue += other.realValue;
    this->imaginaryValue += other.imaginaryValue;
}

void simple_numbers::ComplexNumber::subtract(simple_numbers::ComplexNumber other)
{
    this->realValue -= other.realValue;
    this->imaginaryValue -= other.imaginaryValue;
}

void simple_numbers::ComplexNumber::print()
{
    std::cout << "Real number is: " << this->realValue << std::endl << "Imaginary number is: " << this->imaginaryValue << std::endl;
}