#include "bankstatement.h"

Bankboy::Bankboy()
{
    day = 0;
    amount = 0;
}

Bankboy::Bankboy(int d, double a, const std::string & desc)
        :description(desc)
{
    day = d;
    amount = a;
}

void Bankboy::print_statement() const
{
    std::cout << day << "  " << amount << "  " << description;
}

double Bankboy::get_amount() const
{
    return amount;
}
