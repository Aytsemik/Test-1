class Calculator
{
private:
	double m_arg1;
	double m_arg2;

public:
	enum  signs{
PLUS = '+',
MINUS = '-',
DIV = '/',
MUL = '*'
};
signs currentsign;
	double CalculateFunction( double& a, double& b, char& curr_sign);	
	Calculator(double m_arg1, double m_arg2);
	Calculator();
	~Calculator();


};