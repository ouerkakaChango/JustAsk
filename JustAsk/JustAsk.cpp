//main
#include "StandardHuman.h"
#include "Computer.h"
#include "Connector.h"
#include "God.h"
#ifdef _WIN32
#include "windows.h"
#endif // _WIN32


int main()
{
	//test...
	
	StandardHuman* user1=GOD.Create<StandardHuman>("user1");
	Computer* pc1=GOD.Create<Computer>("pc1");
	Connector* keyBoard1=GOD.Create<Connector>("keyBoard1");
	//"user1", "pc1"
	keyBoard1->SetConnection("user1", "pc1");

	user1->Ask("Demand1.json");

	
#ifdef _WIN32
	system("pause");
#endif // _WIN32
    return 0;
}

