#include "God.h"
#include "User.h"
#include "Connector.h"
#include "Computer.h"
#include "json.h"
God& God::GetInstance() {
	static God godx;
	return godx;
}

void God::Response(User* user, string action, string content) {
	if (action == "TypeIn") {
		auto iter = allConnections.find(user->name);
		if (iter != allConnections.end()) {
			Computer* pc = (Computer*)allObjs[iter->second];
			cout << pc->name;
			this->Response(pc, "Process", content);
		}
		else {
			cout << "\n>>Error:cnnection not found for user:" << user->name;
		}
	}
}
void God::Response(class Computer* computer, string action, string content) {
	if (action == "Process") {
		//??? “‘∫Ûœ∏∑÷
		std::ifstream ifs;
		ifs.open(content);
		Json::Reader reader;
		Json::Value root;
		if (!reader.parse(ifs, root, false))
		{
		std::cout << "\n>>Error:When reading file.";
		}
		else {
		std::cout <<endl<< root["Language"].asString();
		}
	}
}


