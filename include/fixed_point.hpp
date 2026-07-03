#ifndef DOCUMENTS_PROJECTS_FIXED_POINT_HPP
#define DOCUMENTS_PROJECTS_FIXED_POINT_HPP
#include <iostream>
#include <cstdint>

class FixedPoint{
    public:
        FixedPoint(){
            m_raw_integer=0;
        }
        explicit FixedPoint(int32_t input){
            m_raw_integer = input << m_fraction_bits;
        }

        int32_t getFixedValue() const { return m_raw_integer;}

        FixedPoint operator+(const FixedPoint& other) const{
            FixedPoint result;
            result.m_raw_integer = this->m_raw_integer + other.m_raw_integer;
            return result;
        }
        FixedPoint operator*(const FixedPoint& other) const{
            FixedPoint result;
            result.m_raw_integer = (this->m_raw_integer * other.m_raw_integer) >> m_fraction_bits;
            return result;

        }

        double toDouble() const{
            return static_cast<double>(m_raw_integer) / (1 << m_fraction_bits);
        }

    private:
        int32_t m_raw_integer;
        static constexpr int m_fraction_bits=8;

    
};

#endif
