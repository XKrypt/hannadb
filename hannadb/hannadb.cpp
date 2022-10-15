

#include <iostream>
#include "parser.hpp"


int main()
{
    std::string text = "condition > condition";
    Condition condition = Parser::ReadCondition(text);

	for (int i = 0; i < condition.values.size(); i++)
	{
		std::list<std::string>::iterator it = condition.values.begin(); 
		std::next(it, i);
		std::cout << *it << std::endl;
	}
