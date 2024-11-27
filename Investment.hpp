#pragma once

class Investment
{
	int money;
	int risk;
	int start;
	int end;
public:
	Investment(int r,int start,int end);
	int getInvestmentStatus(int tdif);
	~Investment();

};

