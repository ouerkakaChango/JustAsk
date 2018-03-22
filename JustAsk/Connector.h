#ifndef CONNECTOR_H
#define CONNECTOR_H
//Such as a connector for (StandardHuman,StanardPC)->Keyboard,mouse...
#include "Utility.h"
class Connector{
private:
	string UpperObj, LowerObj;
public:
	string name;
	Connector(string _UpperObj="",string _LowerObj="");
	void SetConnection(string _UpperObj, string _LowerObj);
};
#endif
