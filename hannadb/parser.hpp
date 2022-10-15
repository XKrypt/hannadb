#include "json.hpp"
#include <iostream>
#include <random>
#include "doc_struct.hpp"


using json = nlohmann::json;
class Parser
{
	Parser() {
	}
public:
	
	static void ReadCondition(std::string condition) {

		std::list<std::string> strings;

		int i = 0;

		int startPointer;
		int currentIndex;
		std::list<char> operators;

		while (i <= condition.length())
		{
			if (condition[i] == '>' || condition[i] == '=' || condition[i] == '<' || condition[i] == '!')
			{
				std::string value = "";
				value.append(condition, startPointer, i - startPointer);
				strings[currentIndex] = value;
				currentIndex++;
				startPointer = i + 1;
				operators.push_front(condition[i]);
				strings.push_front(value);
				;
			}
		}
		
	}


	/// <summary>
	/// Genrate a doc class from json
	/// </summary>
	/// <param name="doc">the json with doc</param>
	/// <returns></returns>
	static ItemDoc getDoc(json& doc) {
		return ItemDoc(doc["attributes"], doc["conditions"], doc["costs"]);
	}

private:

};

struct Condition {
	Condition(std::list<std::string> values, std::list<char> operators) {
		this->values = values;
		this->operators = operators;

	};
public:
	std::list<std::string> values;
	std::list<char> operators;




};

