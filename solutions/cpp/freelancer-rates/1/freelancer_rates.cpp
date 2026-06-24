#include <cmath>

#define BILLABLE_DAYS  22
#define BILLABLE_HOURS 8


double daily_rate(double hourly_rate)
{
    return BILLABLE_HOURS * hourly_rate;
}

double apply_discount(double before_discount, double discount) 
{
    return before_discount * (1.0 - (discount / 100.0));
}

int monthly_rate(double hourly_rate, double discount)
{
    return std::ceil(apply_discount((BILLABLE_DAYS * daily_rate(hourly_rate)), discount));
}


int days_in_budget(int budget, double hourly_rate, double discount) 
{
    return budget / apply_discount(daily_rate(hourly_rate), discount);
}
