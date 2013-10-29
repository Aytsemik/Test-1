#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{
	double operand1,operand2;
	char my_operator;
	cout << "Enter expression"<<endl;
	cin >> operand1;
	cin >> my_operator;
	cin >> operand2;
	Calculator calcObj;
	cout << "=" << calcObj.CalculateFunction(operand1,operand2,my_operator) << endl;
	
	return 0;

}