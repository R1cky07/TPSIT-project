#ifndef MONTH_H
#define MONTH_H

class Month {
public:
    Month();
    ~Month();
    void increaseTime(int n);

private:
    int time;
    int timeDif;
};

#endif