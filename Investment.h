#ifndef Investment_H
#define Investment_H

class Investment
{
private:
    double money;
    int risk, time;

public:
    Investment();
    ~Investment();
    double UpdateInvestment(int tdif);
    void setAll(double M, int firstChoice, int secondChoice);
};
#endif
