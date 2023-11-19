#pragma once
#include <iostream>

namespace simple_numbers{
    class Numbers{
        public:
            virtual void print();
    };

    class RealNumber: public Numbers{
        protected:
            double realValue;

        public:
            RealNumber();
            RealNumber(double r);
            void add(RealNumber other);
            void subtract(RealNumber other);
            virtual void print() override;
    };

    class ComplexNumber: public RealNumber{
        private:
            double imaginaryValue;

        public:
            ComplexNumber();
            ComplexNumber(double r, double i);
            void add(ComplexNumber other);
            void subtract(ComplexNumber other);
            void print() override;
    };
}