#include "Calculator.h"
#include <iostream>



double Calculator::CalculateFunction(double& a, double& b, char& currentsign)
{
	switch(currentsign)
	{
	case PLUS:
		a += b;
		break;
	case MINUS:
		a -= b;
		break;
	case DIV:
		if(b == 0) 
		{
	    std::cout<<"eternal";
		return -1 ;	
		}
		a /= b;
		break;
	case MUL:
		a *= b;
		break;
	default:
		std::cout << "not correct expression" << std::endl;
		break;
	}
	return a;
}

Calculator::Calculator(double mem1,double mem2)
{
	m_arg1 = mem1;
	m_arg2 = mem2;
}

Calculator::Calculator()
{
	
}

Calculator::~Calculator()
{
	
}