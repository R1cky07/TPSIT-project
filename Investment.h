#include <iostream>
using namespace std;


#ifndef Investment_H
#define Investment_H
class Investment
{
private:
    int money;
    int risk;
    int start;
    int end;
public:
    Investment(double m, int r,int s,int end);
    double getInvestmentStatus(int tdif);
    ~Investment();
};
#endif
