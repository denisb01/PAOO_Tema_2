#include "numbers.hpp"

/* Real Numbers functions */

numbers::RealNumber::RealNumber()
{
    this->value = new double;

    *(this->value) = 0.0;

    this->string_value = std::to_string(*this->value);
}

numbers::RealNumber::RealNumber(double n)
{
    this->value = new double;
    
    *(this->value) = n;

    this->string_value = std::to_string(*this->value);
}

numbers::RealNumber::RealNumber(const numbers::RealNumber& toCopy)
{
    this->value = new double;
    *(this->value) = *(toCopy.value);

    this->string_value = toCopy.string_value;
}

numbers::RealNumber::RealNumber(numbers::RealNumber&& toMove)
{
    this->value = toMove.value;
    this->string_value = toMove.string_value;

    toMove.value = nullptr;
    toMove.string_value = "";
}

numbers::RealNumber& numbers::RealNumber::operator=(const numbers::RealNumber other) {
    std::cout << "Copying!" << std::endl;

    this->value = new double;
    *(this->value) = *(other.value);

    this->string_value = other.string_value;

    return *this;
}

numbers::RealNumber numbers::RealNumber::operator+(const numbers::RealNumber& other) const{
    return numbers::RealNumber(*this->value + *other.value);
}

numbers::RealNumber numbers::RealNumber::operator-(const numbers::RealNumber& other) const{
    return numbers::RealNumber(*this->value - *other.value);
}

std::string numbers::RealNumber::toString()
{
    return this->string_value;
}

void numbers::RealNumber::print()
{
    std::cout << "The real number is: " << *(this->value) << std::endl;
}

numbers::RealNumber::~RealNumber()
{
    delete this->value;
}

/* Complex Numbers functions */

numbers::ComplexNumber::ComplexNumber()
{
    this->realValue = new double;
    this->imaginaryValue = new double;

    *(this->realValue) = 0.0;
    *(this->imaginaryValue) = 0.0;

    this->string_value = std::to_string(*this->realValue) + " + " + std::to_string(*this->imaginaryValue) + "i";
}

numbers::ComplexNumber::ComplexNumber(double r, double i)
{
    this->realValue = new double;
    this->imaginaryValue = new double;

    *(this->realValue) = r;
    *(this->imaginaryValue) = i;

    this->string_value = std::to_string(*this->realValue) + " + " + std::to_string(*this->imaginaryValue) + "i";
}

numbers::ComplexNumber::ComplexNumber(const numbers::ComplexNumber& toCopy)
{
    this->realValue = new double;
    *(this->realValue) = *(toCopy.realValue);

    this->imaginaryValue = new double;
    *(this->imaginaryValue) = *(toCopy.imaginaryValue);

    this->string_value = std::to_string(*this->realValue) + " + " + std::to_string(*this->imaginaryValue) + "i";
}

numbers::ComplexNumber::ComplexNumber(numbers::ComplexNumber&& toMove)
{
    this->realValue = toMove.realValue;
    this->imaginaryValue = toMove.imaginaryValue;
    this->string_value = toMove.string_value;

    toMove.realValue = nullptr;
    toMove.imaginaryValue = nullptr;
    toMove.string_value = "";
}

numbers::ComplexNumber& numbers::ComplexNumber::operator=(numbers::ComplexNumber&& other) {
    std::cout << "Moving!" << std::endl;

    if(this != &other){
        delete this->realValue;
        delete this->imaginaryValue;

        this->realValue = other.realValue;
        this->imaginaryValue = other.imaginaryValue;
        this->string_value = other.string_value;

        other.realValue = nullptr;
        other.imaginaryValue = nullptr;
        other.string_value = "";
    }

    return *this;
}

numbers::ComplexNumber numbers::ComplexNumber::operator+(const numbers::ComplexNumber& other) const{
    return numbers::ComplexNumber(*this->realValue + *other.realValue, *this->imaginaryValue + *other.imaginaryValue);
}

numbers::ComplexNumber numbers::ComplexNumber::operator-(const numbers::ComplexNumber& other) const{
    return numbers::ComplexNumber(*this->realValue - *other.realValue, *this->imaginaryValue - *other.imaginaryValue);
}

std::string numbers::ComplexNumber::toString()
{
    return this->string_value;
}

void numbers::ComplexNumber::print()
{
    std::cout << "The real value is: " << *(this->realValue) << std::endl << "The imaginary value is: " << *(this->imaginaryValue) << std::endl;
}

numbers::ComplexNumber::~ComplexNumber()
{
    delete this->realValue;
    delete this->imaginaryValue;
}