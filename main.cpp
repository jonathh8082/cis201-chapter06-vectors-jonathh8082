/*
    *file: vectors.cpp
    *auther: jonathan hamilton
    *email: jonathh8082@student.vvc.edu
    *description: vectors problem #13 making a bankstatement 
    *authers note: I'm a little bit dumb and miss typed a few files so if you see something like "main.cp" or "bankstate.co" those are my failures to type correctly
*/
#include <vector>
#include "bankstatement.h"
#include <iostream>

int main()
{
#if 1
    std::vector<Bankboy> statements;
    bool more = true;
    int day;
    double amount;
    std:: string description;
    char more_data;
    while (std::cin >> day && day <=30 && day >= 1)
    {
        std:: cin>> amount >> description;
        statements.push_back(Bankboy(day, amount, description));
    }

    double initial_balance = statements[0].get_amount();

    for (int i = 1,n = statements.size(); i <n; i++)
    {
        if (statements[i].get_amount() > 0) 
            std::cout << statements[i].get_amount() << "were deposited\n";\
        else
            std::cout << statements[i].get_amount() << "were checked\n";
    }
#endif
}

