
#ifndef Investment_H
#define Investment_H
class Investment
{
private:
    double money;
	int risk, time;
public:
    Investment(double m, int r = 0, int t = 0);
    double getInvestmentStatus(int tdif);
    ~Investment();
};
#endif
