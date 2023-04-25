#include <iostream>
#include <stdexcept>
using namespace std;

fload Division(float num, float den)
{
    if(den == 0) {
        throw runtime_error("Math error: Attemped to divide by Zero\n");
    }
    return (num/den);
}

int main()
{
    float numerator, denominator, result;
    numerator = 12.5;
    denominator = 2;
    try {
        result = Division(numerator, denominator);
        cout << "The quotient is "
            << result << endl;
    }
    cath(runtime_error& e) {
        cout << "Exception occured" << endl << e.what();
    }
}
