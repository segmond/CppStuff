#ifndef __IntRateCalulator__
#define __IntRateCalculator__

#include <iostream>

class IntRateCalculator {
public:
    IntRateCalculator(double rate);
    IntRateCalculator(const IntRateCalculator &v);
    IntRateCalculator &operator =(const IntRateCalculator &v);
    ~IntRateCalculator();

    double singlePeriod(double value);
private:
    double m_rate;
};
        
inline double IntRateCalculator::singlePeriod(double value)
{
    double f = value * (1 + this->m_rate);
    return f;
}
#endif
