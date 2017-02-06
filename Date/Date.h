//ÈÕÆÚÀà
#include <string>
class Date
{
public:
	Date() = default;
	Date(const Date&d);
	Date(const std::string&s);
	Date operator=(const Date&d);
	friend Date operator-(const Date&lhs,const Date&rhs);
	friend Date operator+(const Date&lhs, const Date&rhs);

private:
	unsigned int m_year;
	unsigned int m_month;
	unsigned int m_day;
};