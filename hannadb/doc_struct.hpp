#include "json.hpp"

using json = nlohmann::json;

struct ItemDoc
{

	ItemDoc(json attributes, json conditions, json costs) {
		this->attributes = attributes;
		this->conditions = conditions;
		this->costs = costs;
	}
public:
	json attributes;

	json conditions;

	json costs;
};