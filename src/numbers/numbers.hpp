#pragma once
#include <string>
#include <iostream>

namespace numbers{
    class Numbers{
        protected:
            std::string string_value;
            
        public:
            virtual std::string toString() = 0;
            virtual void print() = 0;
    };

    class RealNumber: Numbers{
        private:
            double* value; 

        public:
            RealNumber();
            RealNumber(double n);
            RealNumber& operator=(const RealNumber other);
            RealNumber operator+(const RealNumber& other) const;
            RealNumber operator-(const RealNumber& other) const;
            RealNumber(const RealNumber& toCopy);
            RealNumber(RealNumber&& toMove);
            std::string toString() override;
            void print() override;
            ~RealNumber();
    };

    class ComplexNumber: Numbers{
        private:
            double* realValue;
            double* imaginaryValue;

        public:
            ComplexNumber();
            ComplexNumber(double r, double i);
            ComplexNumber& operator=(ComplexNumber&& other);
            ComplexNumber operator+(const ComplexNumber& other) const;
            ComplexNumber operator-(const ComplexNumber& other) const;
            ComplexNumber(const ComplexNumber& toCopy);
            ComplexNumber(ComplexNumber&& toMove);
            std::string toString() override;
            void print() override;
            ~ComplexNumber();
    };
}