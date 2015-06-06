#include "IntRateCalculator.h"
#include <iostream>
#include <stdlib.h>

/**
 * Given an interest rate and a value, show what the future value of the investment after a single period
 */
int main(int argc, const char * argv[]) {

    if (argc != 3) {
        std::cout << "Usage: " << argv[0] << " <Interst rate> <value> " << std::endl;
        return 1;
    }

    double rate = atof(argv[1]);
    double value = atof(argv[2]);

    IntRateCalculator irCalculator(rate);
    double res = irCalculator.singlePeriod(value);

    std::cout << " Result is " << res << std::endl;
    return 0;
}
