#include "User.h"
#include "God.h"

User::User()
{
}


User::~User()
{
}

void User::Ask(string content) {
	//Ӧ������Connectorһֱ���£�������
	//1.�û��û����̣�������������ź�
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