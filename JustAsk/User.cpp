#include "User.h"
#include "God.h"

User::User()
{
}


User::~User()
{
}

void User::Ask(string content) {
	//应该沿着Connector一直向下，并处理
	//1.用户敲击键盘，键盘生成输出信号
	GOD.Response(this, "TypeIn", content);
	//############
	/*std::ifstream ifs;
	ifs.open(filePath);
	Json::Reader reader;
	Json::Value root;
	if (!reader.parse(ifs, root, false))
	{
		std::cout << ">>Error:When reading file.\n";
	}
	else {
		std::cout << root["Language"].asString()<<"\n";
	}*/
	//##############
}