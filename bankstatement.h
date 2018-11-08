#ifndef BANKSTATEMENT_H
#define BANKSTATEMENT_H
#include <string>
#include <iostream>

class Bankboy
{
    public:
        Bankboy();
        Bankboy(int d, double a, const std::string& desc);
        void print_statement() const;
        double get_amount() const;

    private:
        int day;
        double amount;
        std::string description;
};
#endif
