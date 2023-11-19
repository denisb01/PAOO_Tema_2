#include <iostream>
#include "numbers.hpp"
#include "simple_numbers.hpp"

int main()
{
    // Real numbers

    numbers::RealNumber number(5.5);
    numbers::RealNumber number1(6.75);

    numbers::RealNumber result = number + number1;

    number = result;

    number.print();
    std::cout << result.toString() << std::endl <<std::endl;

    // Complex numbers

    numbers::ComplexNumber cNumber(5.5,2.5);
    numbers::ComplexNumber cNumber1(6.75, 1.75);

    numbers::ComplexNumber cResult = cNumber - cNumber1;

    std::cout << cResult.toString() << std::endl;

    cNumber = std::move(cResult);

    cNumber.print();

    std::cout << std::endl;

    // Simple numbers

    simple_numbers::Numbers a;

    a.print();

    simple_numbers::RealNumber b(5.5);
    simple_numbers::RealNumber c(6.5);

    b.add(c);
    b.print();

    std::cout << std::endl;

    simple_numbers::ComplexNumber d(3.2,6.8);
    
    simple_numbers::RealNumber* f = &d;
    f->add(b);

    f->simple_numbers::RealNumber::print();
    
    std::cout << std::endl;

    f->print();

    std::cout << std::endl;

    d.print();   
}